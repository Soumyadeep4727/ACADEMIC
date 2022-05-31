#include <stdio.h>

int main()
{
    int m, n, p, sum=0, a[10][10], b[10][10], c[10][10];
    printf("Enter the rows and columns of first matrix : ");
    scanf("%d %d", &m, &n);
    printf("Enter the first matrix : \n");
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    scanf("%d", &a[i][j]);
    printf("Enter the column of second matrix : ");
    scanf("%d", &p);
    printf("Enter the second matrix : \n");
    for(int i=0;i<n;i++)
    for(int j=0;j<p;j++)
    scanf("%d", &b[i][j]);
    for(int i=0;i<m;i++)
        for(int j=0;j<p;j++)
        {
            c[i][j] = 0;
            for(int k=0;k<n;k++)
                c[i][j] += a[i][k]*b[k][j];
        }
    printf("The matrix after multiplication : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}
