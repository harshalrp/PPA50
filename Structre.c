#include<stdio.h>

struct Demo
{
    int no;
    float f;
    double d;
};

int main()
{
    struct Demo obj;
    obj.no = 41;
    obj.f = 86.60;
    obj.d = 79.8666;

    printf("%d\n",obj.no);
    printf("%d\n",obj.f);
    printf("%d\n",obj.d);
    return 0;
}