#include "main.h"
#include <stddef.h>

/**
 *
*/

size_t _strlen(const char *s)
{
    size_t len = 0;

    while (s[len] != '\0')
    {
        len++;
    }

    return len;
}
