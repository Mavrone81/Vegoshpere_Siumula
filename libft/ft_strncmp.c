#include <unistd.h>

int ft_strncmp(const char* str1, const char* str2, size_t n) 
{
    while (n > 0 || *str1 != '\0' || *str2 != '\0')
    {
        if (*str1 != *str2)
            return (*str1 - *str2);
        str1++;
        str2++;
        n--;
    }
    return (0);
}
/*
int main() {
    const char* str1 = "Hello, Universe";
    const char* str2 = "Hello, World";
    int result = ft_strncmp(str1, str2, 20); // Compare first 6 characters

    if (result == 0) {
        write(1, "Strings are equal\n", 18);
    } else if (result < 0) {
        write(1, "str1 is less than str2\n", 24);
    } else {
        write(1, "str1 is greater than str2\n", 27);
    }

    return 0;
}*/