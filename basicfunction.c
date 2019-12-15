#include <stdio.h>

int add_numbers (int a, int b)
{
    int sum;
    sum = a + b ;
    return sum;
}

int main(int argc, char *argv[])
{
    int result;
    result = add_numbers( 4, 3);
    printf("sum is %d\n", result);
    return 0;

}
