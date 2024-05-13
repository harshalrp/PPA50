#include<stdio.h>

int x = 20;

extern int no;

extern void Patil();

int main()
{
    printf("value of x is : %d\n", x);
    printf("value of no is : %d\n", no);

    Patil();

    return 0;
}