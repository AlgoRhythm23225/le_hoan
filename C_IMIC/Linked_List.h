typedef	struct {
	int value;
	void* previous_node;
}node_t;

typedef struct {
	node_t* last_node;
	int len;
}linked_list_t;

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

int get_value(linked_list_t* ll, int index) {
	node_t* temp = ll->last_node;
	for (int i = ll->len - 1; i > index; i--) {
		temp = temp->previous_node;
	}
	return temp->value;
}

void print_list(linked_list_t* ll) {
	for (int i = ll->len - 1; i >= 0; i--) {
		printf("%d ", get_value(ll, i));
	}
	printf("\n");
}

int get_len(linked_list_t* ll) {
	return ll->len;
}

void insert_node(linked_list_t* ll, int index, int val) {
	node_t* node = malloc(sizeof(node_t));
	node_t* node_temp = ll->last_node;
	for (int i = ll->len - 1; i > index; i--) {
		node_temp = node_temp->previous_node;
	}
	node->previous_node = node_temp->previous_node;
	node->value = val;
	node_temp->previous_node = node;
	ll->len++;
}

void remove_last_node(linked_list_t* ll) {
	node_t* temp = ll->last_node;
	ll->last_node = temp->previous_node;
	free(temp);
	ll->len--;
}

void remove_node(linked_list_t* ll, int index) {
	node_t* temp = ll->last_node;
	for (int i = ll->len - 1; i > index + 1; i--) {
		temp = temp->previous_node;
	}
	node_t* note_to_delete = temp->previous_node;
	temp->previous_node = note_to_delete->previous_node;
	free(note_to_delete);
	ll->len--;
}

node_t* search_node(linked_list_t* ll, int val) {
	node_t* temp = ll->last_node;
	node_t* ptr = NULL;
	for (int i = ll->len - 1; i >= 0; i--) {
		if (temp->value == val) {
			ptr = temp;
		}
		temp = temp->previous_node;
	}
	return ptr;
}

int get_value_last_node(linked_list_t* ll) {
	node_t* temp = ll->last_node;
	return temp->value;
}

void delete_all(linked_list_t* ll) {
	node_t* node = ll->last_node;
	while (node != NULL) {
		node_t* temp = node;
		node = node->previous_node;
		free(temp);
	}
	ll->last_node = NULL;
	ll->len = 0;
}

