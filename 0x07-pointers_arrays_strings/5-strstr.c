#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *haystack_ptr = haystack;
		char *needle_ptr = needle;

		while (*haystack_ptr && *needle_ptr && *haystack_ptr == *needle_ptr)
		{
			haystack_ptr++;
			needle_ptr++;
		}

		if (*needle_ptr == '\0')
		{
			return haystack;
		}

		haystack++;
	}

	return (NULL);
}
