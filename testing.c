#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "./libft/libft.h"
#include <fcntl.h>


#include <stdio.h>

void *ft_memset(void *b, int c, size_t len) {
    unsigned char *ptr = b;
    while (len--) {
        *ptr++ = (unsigned char)c;
    }
    return b;
}

int main() 
{
    int s;
    ft_memset(&s, 0, 4 );
    ft_memset(&s, 5, 2 );
    ft_memset(&s, 57, 1);

    printf("%d", s);
    return 0;
}