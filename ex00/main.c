
#include <stdio.h>


int     main(void)
{
        char    *src;
        char    dest[100];

        src = "Hello World!";
        ft_strcpy(dest, src);
        printf("%s\n", dest);
        return(0);
}
