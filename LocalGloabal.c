#include<stdio.h>

int x = 101;

void Patil()
{
    int i = 21;
    int no = 51;

    printf("from main value of no is :%d\n",no);
    printf("from main value of no is :%d\n",i);
    printf("from main value of no is :%d\n",x);
}
int main()
{
    int no = 11;

    printf("from main value of no is :%d\n",no);
    printf("from main value of no is :%d\n",x);
    
    Patil();

    return 0;
}