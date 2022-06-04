/* assign grade according to rank */

#include<stdio.h>

int main()
{
    int rank;
    printf("Enter the grade : ");
    scanf("%d",&rank);
    if(rank>=90)
        printf("Grade O\n");
    else if(rank>=80)
        printf("Grade A\n");
    else if(rank>=70)
        printf("Grade B\n");
    else if(rank>60)
        printf("Grade C\n");
    else if(rank>=50)
        printf("Grade D\n");
    else if(rank>=40)
        printf("Grade E\n");
    else
        printf("Grade F\n");
}