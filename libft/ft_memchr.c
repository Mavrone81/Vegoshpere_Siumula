#include "libft.h"

void	*ft_memchr(const void *s, int a, size_t b)
{
	size_t	i;

	i = -1;
	while (++i < b)
		if (((unsigned char *)s)[i] == (unsigned char)a)
			return ((void *)s + i);
	return (NULL);
}
/*int main() {
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
