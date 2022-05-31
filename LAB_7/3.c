#include<stdio.h>
#include<string.h>
int main()
{
    char arr[20];
    int flag=0;
    printf("Enter the string : \n");
    gets(arr);
    int len = strlen(arr);
    for (int i=0,j=len-1;i<len/2 && j>len/2;i++,j--)
        if (arr[i]!=arr[j])
            flag = 1;
    if (flag == 0)
    printf("The string is palindrome.\n");
    else
    printf("The string is not palindrome.\n");
    return 0;
}