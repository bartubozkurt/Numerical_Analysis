#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

#define eps 0.0000001

double g(double x)
{
       return  (exp(-2.0*x)+1)/2.0;      
}

double gt(double x)
{
       return -exp(-2.0*x);
}


int main ()
{
    double xnow,xprev;
    xnow=1.0/2.0;
    do
    {
       xprev=xnow;           
       xnow=g(xprev); 
       printf("%4.8lf %4.8lf %4.8lf\n",xprev,xnow,fabs(xnow-xprev));                
    }while(fabs(xnow-xprev)>eps);
    
    printf("\n\nsonuc = %3.9lf",xnow);
    
    
    getch();
    return 0;
}
