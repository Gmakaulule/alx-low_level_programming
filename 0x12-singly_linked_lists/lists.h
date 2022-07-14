
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

size_t print_list(const list_t *h);

#endif