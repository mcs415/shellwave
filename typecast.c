#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    char c;

    char *ptr;
    char s;
    
    /*  Example 1   */
    c = 'w';
    i = (int) c;

    printf("i = %d, %c\n", i, i);
    
     /*  Example 1   */   
    s = 'x';
    ptr = &s;

    i = (int)ptr;
    c = (char) i;

    printf("c = %d\n", c);

    return 0;

}



