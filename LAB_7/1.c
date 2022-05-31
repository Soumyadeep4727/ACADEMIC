#include <stdio.h>
int m=0, n=0;
void print(int[][], int, int);
int main()
{
    int row, col, a[10][10], b[10][10], c[10][10];
    printf("Enter the rows and columns : ");
    scanf("%d %d", &row, &col);
    m=row;
    n=col;
    printf("Enter the first matrix : \n");
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    scanf("%d", &a[i][j]);
    printf("Enter the second matrix : \n");
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    scanf("%d", &b[i][j]);
    printf("The first matrix :\n");
    print(a,row,col);
    printf("The second matrix : \n");
    print(b,row,col);
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    c[i][j]=a[i][j]+b[i][j];
    printf("The matrix after addition : \n");
    print(c,row,col);s
    return 0;
}
void print(int a[m][n], int num)
{
    printf("Matrix %d:\n",num);


}
