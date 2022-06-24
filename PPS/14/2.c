/* read contents of input.txt, sort, and store the sorted numbers in output.txt */

#include<stdio.h>

int main()
{
    FILE *fpt1,*fpt2;
    int n=0,num,i=0,j,key;
    fpt1 = fopen("input.txt","r");
    int arr[30];
    while((num=getw(fpt1))!=EOF)
    {
        arr[i] = num;
        i++;
        n++;
    }
    for(i=1;i<n;i++)
    {
        key = arr[i];
        for(j =i-1;j>=0 && arr[j] > key;j--)
            arr[j+1]=arr[j];
        arr[j+1]=key;
    }
    fpt2 = fopen("output.txt","w");
    for(int i=0;i<n;i++)
        putw(arr[i],fpt2);
    fclose(fpt1);
    fclose(fpt2);
}