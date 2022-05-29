#include <stdio.h>
void concate(char[], char[]);
int length(char a[]);
int main()
{
    char a1[40], a2[20];
    printf("Enter two strings: \n");
    gets(a1);
    gets(a2);
    concate(a1,a2);
    return 0;
}
void concate(char a1[], char a2[])
{
    for(int i=0, j=0, k=length(a1);i<length(a2);i++,j++,k++)
    a1[k]=a2[j];
    printf("The concated string:\n%s", a1);
}
int length(char a[])
{
    int count=0;
    for(int i=0;a[i]!='\0';i++)
    count++;
    return count;
}