Print list
0-print_list.c
Write a function that prints all the elements of a list_t list.
Prototype: size_t print_list(const list_t *h);
Return: the number of nodes
Format: see example
If str is NULL, print [0] (nil)
You are allowed to use printf

List length
1-list_len.c
Write a function that returns the number of elements in a linked list_t list.
Prototype: size_t list_len(const list_t *h);

Add node
2-add_node.c
Write a function that adds a new node at the beginning of a list_t list.
Prototype: list_t *add_node(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

Add node at the end
3-add_node_end.c
Write a function that adds a new node at the end of a list_t list.
Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

Free list
4-free_list.c
Write a function that frees a list_t list.
Prototype: void free_list(list_t *head);
The Hare and the Tortoise
100-first.c
Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
You are allowed to use the printf function

Real programmers can write assembly code in any language
101-hello_holberton.asm
Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
You are only allowed to use the printf function
You are not allowed to use interrupts
Your program will be compiled using nasm and gcc:
