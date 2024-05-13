#include<stdio.h>

int Multiplication(int no1,int no2)
{
    int ans = 0;
    ans = no1 * no2;
    return ans;
}

int main()
{
    // local variable
    int Value1 =0, Value2 =0, Ret = 0;

    int(*fptr)(int, int);

    fptr = Multiplication;

    printf("enter first number:\n");
    scanf("%d",&Value1);

    printf("enter second number:\n");
    scanf("%d",&Value2);

    Ret = fptr(Value1,Value2);

    printf("multiplicationn is:%d\n",Ret);

    return 0;
}