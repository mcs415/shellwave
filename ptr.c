#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    int *k;

    n = 25;
    k = &n;
    *k = 345;    


    printf("n = %d\n", n);
     
    printf("k = %x\n", k);
    
     
    printf("*k = %d\n", *k);
     

    return 0;
}
