/* solve x^3 - 8x - 4 = 0 using Newton Raphson method */

#include<stdio.h>
#include<math.h>

double eps=0.00001;

double f(int x)
{
    return x*x*x - 8*x - 4;
}

double deri(int x)
{
    return 3*x*x - 8;
}

void newton(double x)
{    
    while(1>0)
    {
        if(fabs(f(x))<=eps)
            break;
        x-=f(x)/deri(x);
    }
    printf("The root is %lf.\n", x);
}

int main()
{
    newton(540);    
}