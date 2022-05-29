#include <stdio.h>
int length(char[]);
int main()
{
    char arr[20];
    printf("Enter the string: \n");
    gets(arr);
    printf("The length of the string is %d.\n", length(arr));
    return 0;
}
int length(char a[])
{
    int count=0;
    for(int i=0;a[i]!='\0';i++)
    count++;
    return count;
}