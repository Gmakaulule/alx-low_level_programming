#include <stddef.h>
#ifndef _LINKED_LIST
#define _LINKED_LIST

/**
 * struct list_s - singly linked list
 * @str: string - input string
 * @len: length of the string
 * @next: pointer to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

void free_list(list_t *head);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
int _strlen(const char *s);
list_t *add_node_end(list_t **head, const char *str);



#endif