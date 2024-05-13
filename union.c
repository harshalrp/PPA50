#include<stdio.h>
#pragma pack(1)
struct Demo
{
    int no;
    float f;
    int data;
    char ch;
};

union Hello
{
    int no;
    float f;
    int data;
    char ch;
};

int main()
{
    struct Demo dobj;
    union Hello hobj;

    printf("size of structure is :%d\n",sizeof(dobj));
    printf("size of sunion is :%d\n",sizeof(hobj));

    hobj.no = 11;
    printf("%d\n",hobj.no);

    hobj.data = 21;
    printf("%d\n",hobj.data);
    printf("%d\n",hobj.no);


    return 0;
}