#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int value;
	void* previous_node;
}node_t;

typedef struct {
	int len;
	node_t * last_node;
}linked_list_t;

int get_len(linked_list_t* ll) {
	return ll->len;
}

void add_node(linked_list_t* ll, int val) {
	node_t* node = malloc(sizeof(node_t));
	node->value = val;
	if (ll->len > 0)
		node->previous_node = ll->last_node;
	else
		node->previous_node = 0;
	ll->last_node = node;
	ll->len++;
}

void insert_node(linked_list_t* ll, int index, int val) {
	node_t* node = malloc(sizeof(node_t));
	node->previous_node = ll->last_node;
	node->value = val;
	for (int i = ll->len - 1; i > index - 1; i--) {
		node->previous_node = ((node_t*)node->previous_node)->previous_node;
	}
	node_t* temp = node->previous_node;
	node->previous_node = temp->previous_node;
	temp->previous_node = node;
	ll->len++;
}

void remove_last_node(linked_list_t* ll) {
	node_t* temp = ll->last_node;
	node_t* temp2 = temp->previous_node;
	free(temp);
	ll->last_node = temp2;
	ll->len--;
}

void remove_node(linked_list_t* ll, int index) {
	node_t* temp = ll->last_node;
	for (int i = ll->len - 1; i > index + 1; i--) {
		temp = temp->previous_node;
	}
	node_t* node_to_delete = temp->previous_node;
	temp->previous_node = node_to_delete->previous_node;
	free(node_to_delete);
	ll->len--;
}

node_t* search_node(linked_list_t* ll, int val) {
	node_t* temp = ll->last_node;
	for (int i = ll->len - 1; i >= 0; i--) {
		if (temp->value == val)
			return temp;
		temp = temp->previous_node;
	}
	return NULL;
}

int get_value(linked_list_t* ll, int index) {
	node_t* temp = ll->last_node;
	for (int i = ll->len - 1; i > index; i--) {
		temp = temp->previous_node;
	}
	return temp->value;
}

int get_value_last_node(linked_list_t* ll) {
	node_t* temp = ll->last_node;
	return temp->value;
}
void list_node(linked_list_t* ll) {
	for (int i = ll->len - 1; i >= 0; i--) {
		printf("%d -> ", get_value(ll, i));
	}
	printf("NULL\n");
}

void delete_all(linked_list_t* ll) {
	node_t* temp = ll->last_node;
	for (int i = ll->len - 1; i >= 0; i--) {
		node_t* temp2 = temp->previous_node;
		free(temp);
		temp = temp2;
	}
	ll->len = 0;
}

int main() {
	
	linked_list_t ll = { 0 };

	add_node(&ll, 87);
	add_node(&ll, 55);
	add_node(&ll, 36);
	add_node(&ll, 74);
	add_node(&ll, 18);

	printf("Linked list origin has %d nodes:\n",get_len(&ll));
	list_node(&ll);

	printf("Insert node 99 at index %d\n",2);
	insert_node(&ll, 2, 99);
	list_node(&ll);

	printf("Remove last node\n");
	remove_last_node(&ll);
	list_node(&ll);

	printf("Remove node at index 3\n");
	remove_node(&ll, 3);
	list_node(&ll);

	//Search
	int search_value = 32;
	if (search_node(&ll, search_value))
		printf("Address of %d is: %p\n",search_value, search_node(&ll, search_value));
	else
		printf("Value %d not found!!\n",search_value);

	printf("Value of the last node is: %d\n", get_value_last_node(&ll));
	
	printf("Remove them all\n");
	delete_all(&ll);
	list_node(&ll);

	printf("Add node to check if all nodes are removed\n");
	add_node(&ll, 87);
	list_node(&ll);
}