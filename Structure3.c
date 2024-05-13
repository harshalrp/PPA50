#include<stdio.h>

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
    struct Student patil;

    printf("size of object is : %d\n",sizeof(harshal));

    harshal.rollno = 45;
    harshal.division = 'A';
    harshal.age = 23;
    harshal.marks = 86;
    harshal.salary= 0;

    printf("salary of harshal is : %d\n",harshal.salary);
    printf("size of object is : %d\n",sizeof(patil));

    return 0;
}