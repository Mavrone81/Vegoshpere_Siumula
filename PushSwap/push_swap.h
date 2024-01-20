#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

typedef struct  s_node{
    int     num;
    char    index;
    int     cheapest;
    struct s_node   prev;
    struct s_node   next;
} t_node;
