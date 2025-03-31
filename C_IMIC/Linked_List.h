typedef struct
{
	int value;
	void* previous_node;
}node_t;

typedef struct
{
	int len;
	node_t* last_node;
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
	node_t* temp = ll->last_node;
	node->value = val;
	for (int i = ll->len - 1; i > index; i--) {
		temp = temp->previous_node;
	}
	node->previous_node = temp->previous_node;
	temp->previous_node = node;
	ll->len++;
}

void remove_last_node(linked_list_t* ll) {
	node_t* temp = ll->last_node;
	ll->last_node = temp->previous_node;
	free(temp);
	ll->len--;
}

void remove_index(linked_list_t* ll, int index) {
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
	node_t* ptr = NULL;
	for (int i = ll->len - 1; i >= 0; i--) {
		if (temp->value == val)
			return temp;
		temp = temp->previous_node;
	}
	return 0;
}
int get_value_last_node(linked_list_t* ll) {
	node_t* temp = ll->last_node;
	return temp->value;
}

int get_value(linked_list_t* ll, int index) {
	node_t* temp = ll->last_node;
	for (int i = ll->len - 1; i > index; i--) {
		temp = temp->previous_node;
	}
	return temp->value;
}

void delete_all(linked_list_t* ll) {
	node_t* temp = ll->last_node;
	node_t* node;
	while (temp != NULL) {
		node_t* prev = temp->previous_node;
		free(temp);
		temp = prev;
	}
	ll->last_node = NULL;
	ll->len = 0;
}

void list_node(linked_list_t* ll) {
	for (int i = ll->len - 1; i >= 0; i--) {
		printf("%d -> ", get_value(ll, i));
	}
	printf("NULL");
	printf("\n");
}