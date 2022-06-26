/*  strcture to store students' records(roll, name, address) in student.dat
    if roll number is provided, the corresponding record should be displayed */

#include<stdio.h>

struct student
{
    int roll;
    char name[20];
    char address[100];
};

int main()
{
    int n,i,j,key;
    struct student s[10],temp;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    FILE *fpt;
    fpt = fopen("student.dat","w");
    for(i=0;i<n;i++)
    {
        printf("Roll : ");
        scanf("%d",&s[i].roll);
        fprintf(fpt,"\t%d",s[i].roll);
        printf("Name : ");
        scanf("%s",s[i].name);
        fprintf(fpt,"\t%s",s[i].name);
        printf("Address : ");
        scanf("%s",s[i].address);
        fprintf(fpt,"\t%s",s[i].address);
    }
    fclose(fpt);    
}
