#include<stdio.h>

void Patil()
{
    int i = 10;
    auto int j = 20;  //  in auto memory gets allocated inside stack
    auto int k;

    printf("%d\n",k);
}
int main()
{
    printf("demonstration of auto storage class\n");

     Patil();
    return 0;
}