#include<stdio.h>

void Patil()
{
    int i = 10;
    register int j = 20;  // register gets memory in allocated directly in cpu register, cpu register is not available then it give auto by default
    register int k;

    printf("%d\n",k);
}
int main()
{
    printf("demonstration of register storage class\n");

    Patil();
    return 0;
}