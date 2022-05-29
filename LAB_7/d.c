#include <stdio.h>
void copy(char[], char[]);
int length(char a[]);
int main()
{
    char a1[20], a2[20];
    printf("Enter two strings: \n");
    gets(a1);
    gets(a2);
    copy(a1,a2);
    return 0;
}
void copy(char a1[], char a2[])
{
    for(int i=0;a2[i]!='\0';i++)
    a1[i]=a2[i];
    for(int i=length(a2);i<length(a1);i++)
    a1[i]='\0';
    printf("The two strings:\n%s\n%s", a1,a2);
}
int length(char a[])
{
    int count=0;
    for(int i=0;a[i]!='\0';i++)
    count++;
    return count;
}