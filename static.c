#include<stdio.h>

void Patil()
{
    static int x = 10;
    x++;
    printf("value of x is : %d\n",x);
}
int main()
{
    printf("demonstration of static storage class\n");

    Patil();
    Patil();
    Patil();

    return 0;
}