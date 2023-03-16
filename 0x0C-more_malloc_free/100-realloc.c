#include "main.h"

/*
 * This function is a custom implementation of the realloc function in C,
 * which is used to resize a previously allocated block of memory.
 *
 * Arguments:
 *  ptr: a pointer to the memory block to be resized
 *  old_size: the current size of the block in bytes
 *  new_size: the desired size of the block in bytes after resizing
 *
 * Returns:
 *  On success, a pointer to the newly resized memory block.
 *  On failure, NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		else
			return (new_ptr);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size < old_size)
		_memcpy(new_ptr, ptr, new_size);
	else
		_memcpy(new_ptr, ptr, old_size);

	free(ptr);

	return (new_ptr);
}
