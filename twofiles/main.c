#include <stdio.h>

int addnumbers(int a, int b);

int main(int argc, char *argv[])
{
    int total;
    total = addnumbers( 2, 4);

    printf("total = %d\n", total);
    return 0;
}

