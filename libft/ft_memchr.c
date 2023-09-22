#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *src;

    src = s;
    while (n > 0)
    {
        if (*src == (unsigned char)c)
        {
            return ((void *)src);
        }
        src++;
        n++;
    }
    return(NULL);
}/*
int main() {
    const char* str = "Hello, World!";
    int character = 'o';
    size_t n = 13; // Search the first 13 characters

    void* result = ft_memchr(str, character, n);

    if (result != NULL) {
        write(1, "Character found: ", 17);
        write(1, result, 1); // Print the found character
        write(1, "\n", 1);
    } else {
        write(1, "Character not found\n", 21);
    }

    return 0;
}*/