#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a;

    while(1)
    {
        printf("Enter integer: ");
        scanf("%d", &a);

    switch (a) {
        case 0:
            printf("Case is 0\n");
            break;
        
        case 1:
            printf("Case is 1\n");
            break;

        case 2:
            printf("Case is 2\n");
            break;

        default:
            printf("Case is default\n");
            exit (0);
            break;
        }
    }
    return 0;
}
