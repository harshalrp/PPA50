#include<stdio.h>

struct Demo
{
    int *p;
    float *q;

};

int main()
{

    struct Demo harshal; //object creation

    int no = 11;
    float f = 99.90;

    harshal.p = &no;
    harshal.q = &f;

    printf("%d\n",*harshal.p);
    
    return 0;
}
