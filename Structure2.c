#include<stdio.h>

struct Marvellous
{
    int no;
    float f;
    int i;
};

int main()
{
    struct Marvellous mobj;

    struct Marvellous *ptr = &mobj;

    ptr->no =21;
    ptr->f= 90.99;
    ptr->i= 89;

    printf("%d\n",ptr->no);
    printf("%d\n",mobj.i);

    printf("%d\n",sizeof(mobj));
    return 0;
}