#include <stdio.h>

int main()
{
    char ASCII;
    printf("Please enter a character:  \n");
    scanf("%c", &ASCII);
    printf("%i\n", ASCII);
    
    int integer;
    printf("Please enter an integer:(between 0 - 127)\n");
    scanf("%i", &integer);
    printf("%c\n", integer);

    return 0;
}
