/* solve x^3 - 8x - 4 = 0 using Bisection method */

#include<stdio.h>

double eps=0.00001;

double f(int x)
{
    return x*x*x - 8*x - 4;
}

void bisection(int x1, int x2)
{
    
    if(f(x1)*f(x2)>=0)
    {
        printf("Wrong initial values.\n");
        return;
    }
    double x0;
    while((x2-x1)>=eps)
    {
        x0=(x1+x2)/2;
        if(f(x0)==0.0)
            break;
        else if(f(x0)*f(x1)<0)
            x2=x0;
        else
            x1=x0;
    }
    printf("The root is %lf.\n", x0);
}

int main()
{
    bisection(-1, 1);    
}