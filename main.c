#include <stdio.h>
int main()
{
    char array_name[100];
    //char array_number[100];
    //char array_class[100];
    setvbuf(stdout,NULL,_IONBF,0);
    printf("班级:");
    //fflush(stdout);
    scanf_s("%s",array_name,10);

    printf("%s",array_name);
    return 0;
}