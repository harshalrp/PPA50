#include <stdio.h>
int x = 30;

extern int no; 

int main()
{
    printf("%d\n", x);
    printf("%d\n",no);

    return 0;
}