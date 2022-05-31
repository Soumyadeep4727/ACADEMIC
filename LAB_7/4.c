#include<stdio.h>
#include<string.h>
int main()
{
    char arr[50], pat[10];
    char a[10] = {'\0'};
    printf("Enter the string:\n");
    gets(arr);
    printf("Enter the pattern:\n");
    gets(pat);
    int flag =0;
    for(int i=0;i<strlen(arr);i++)
    {
        for(int j = 0,k=i;j<strlen(pat); j++,k++)
            a[j]=arr[k];
        if(strcmp(a,pat)==0)
        {
            flag = 1;
            break;
        }
    }
    if (flag==0)
        printf("The set of characters is not present in the array.\n");
    else
        printf("The set of characters is present in the array.\n");
    return 0;
}