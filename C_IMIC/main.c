#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Linked_List.h"

int main() {
	linked_list_t ll = { 0 };

	add_node(&ll, 15);
	add_node(&ll, 25);
	add_node(&ll, 45);
	add_node(&ll, 5);
	add_node(&ll, 85);

	printf("Origin Len = %d: \n", get_len(&ll));
	list_node(&ll);
	printf("Address of 85 is: %p\n", search_node(&ll, 85));
	printf("Value of last node is: %d\n", get_value_last_node(&ll));

	insert_node(&ll, 3, 75);
	printf("Insert 75 at index 3: \n");
	list_node(&ll);

	remove_last_node(&ll);
	printf("Remove last node: \n");
	list_node(&ll);

	remove_index(&ll, 2);
	printf("Remove node at index 2: \n");
	list_node(&ll);

	delete_all(&ll);
	printf("Wipe them all: \n");
	list_node(&ll);
}