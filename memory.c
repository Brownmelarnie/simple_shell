#include "shell.h"

/**
 * bfree - fress a pointer and NULLS the address
 * @ptr: address of pointer to free
 * Return: 1 if freed, otherwise 0
 */

int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return(1);
	}
	return(0);
}
