#ifndef _LISTS_H_
#define _LISTS_H_

/**
 * struct list_t - Represents a node from a linked list
 * @str: The contents of the node
 * @len: The length of the contained string
 * @next: A pointer to the next node
 */
typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t;

int _putchar(char c);

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /* _LISTS_H_ */
