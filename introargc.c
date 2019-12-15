#include <stdio.h>

/* Program written by Morgan Sippel */
/* 12/7/2019                        */
/* C Programming in Linux Tutorial  */
/* Shellwave Youtube Channel        */
/* Intro to argc, lesson 15         */

int main(int argc, char *argv[])
{
    int i;
    printf("argc = %d\n", argc);

    for(i = 0; i < argc; i++) /* we can use i = i+1 */
    {
        printf("argv[%d} = %s\n", i, argv[i]);
    }
       
       
    return 0;
}
    
