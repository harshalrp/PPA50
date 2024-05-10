#include<stdio.h>

int main()
{
    int arr[5] ={10,23,34,45,55};

    printf("base address is : %d\n",arr);
    printf("base address is : %d\n",&arr);
    printf("base address is : %d\n",&(arr[1]));
    
    printf("%d\n","")
    printf("base address is : %d\n",(arr[2]));

    // multiple way to access same element
    printf("%d\n",arr[2]);    // 34
    printf("%d\n",*(arr + 2)); // 34
    printf("%d\n",*(2 + arr)); // 34
    printf("%d\n",2[arr]);    // 34


    return 0;
}