#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[10] = { 8, 20, 5, 11, 21, 45, 7, 2, 22, 17};

    int i, j;
    int n;

    for ( i = 9; i > 0; i--)
    {
        for(j = 0; j < i; j++)
        {
            if(a[j] > a[j+1])
            {
                n = a[j];
                a[j] = a[j+1];
                a[j+1] = n;
            }

        }


    }
    printf("{ ");
    for(i = 0; i < 10; i++)
        printf(" %d, ", a[i]);
    printf("}\n ");

    return 0;
}
