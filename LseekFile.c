#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// SEEK_SET     Beginning of file
// SEEK_CUR     Current position
// SEEK_END     End of file

int main()
{
    char Name[] = {};
    int fd = 0;
    int iRet = 0;
    char Data[40] = {'\0'};

    printf("Enter name of file that you want to open : \n");
    scanf("%s",Name);

    fd = open(Name, O_RDWR);
    lseek(fd,14,SEEK_SET);
    iRet = read(fd,Data,20);

    printf("%d bytes gets succesfully read from the file\n",iRet);

    printf("%s\n",Data);
    
    close(fd);

    return 0;
}