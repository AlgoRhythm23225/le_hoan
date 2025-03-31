#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Linked_List.h"

int main() {
	linked_list_t ll = { 0 };

	add_node(&ll, 50);
	add_node(&ll, 25);
	add_node(&ll, 66);
	add_node(&ll, 463);
	add_node(&ll, 745);

	printf("Linked list co %d node\n", get_len(&ll));

	int x = get_value(&ll, 3);
	printf("Lay gia tri tai vi tri thu 3: %d\n", x);

	printf("Linked list: \n");
	print_list(&ll);
	
	printf("Insert\n");
	insert_node(&ll, 3, 13);
	print_list(&ll);

	printf("Remove last node\n");
	remove_last_node(&ll);
	print_list(&ll);

	printf("Remove\n");
	remove_node(&ll, 2);
	print_list(&ll);

	int ptr = search_node(&ll, 463);
	printf("%d\n", ptr);

	printf("Last node value = %d", get_value_last_node(&ll));

	delete_all(&ll);
	print_list(&ll);
}