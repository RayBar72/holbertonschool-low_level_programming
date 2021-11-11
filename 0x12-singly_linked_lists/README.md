0. function that prints all the elements of a list_t list.
size_t print_list(const list_t *h);
1. function that returns the number of elements in a linked list_t list.
size_t list_len(const list_t *h);
2. function that adds a new node at the beginning of a list_t list.
list_t *add_node(list_t **head, const char *str);
3. function that adds a new node at the end of a list_t list.
list_t *add_node_end(list_t **head, const char *str);
4. Free list function that frees a list_t list.
void free_list(list_t *head);
5. function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.