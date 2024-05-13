#include<stdio.h>

#pragma pack(1)
struct Student
{   
    int rollno;
    char division;
    int age;
    float marks;
    int salary;
};

int main()
{
    struct Student harshal;

    printf("size of object is : %d\n",sizeof(harshal));

    return 0;
}