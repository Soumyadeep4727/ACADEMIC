#include <stdio.h>

int main()
{
    int row, col, a[10][10], b[10][10], c[10][10];
    printf("Enter the rows and columns : ");
    scanf("%d %d", &row, &col);
    printf("Enter the first matrix : \n");
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    scanf("%d", &a[i][j]);
    printf("Enter the second matrix : \n");
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    scanf("%d", &b[i][j]);
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    c[i][j]=a[i][j]+b[i][j];
    printf("The matrix after addition : \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}
