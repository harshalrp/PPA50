#include<stdio.h>

// self referential structure
struct Demo
{
    struct Demo *next;
};

int main()
{
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;

    obj1.data = 11;
    obj1.next = &obj2;

    obj2.data = 20;
    obj2.next = &obj2;

    obj3.data = 30;
    obj3.next = NULL;

    return 0;
}