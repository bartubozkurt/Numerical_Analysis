#include <stdio.h>
#include <math.h>
#include <conio.h>
double f(double x)
{
       return exp(x)-x-2;//1 - 1,8   1,146194
}


int main()
{
    double a=1,b=1.8,c;
    int i,its=18;
    
    if(f(a)*f(b)>0)
    {
        printf("aralikta kok yok!");
        return 0;
    }
    
    if(f(a)>0)
    {
        c=a;
        a=b;
        b=c;
    }
    printf("%2.6s%2.6s%2.6s%2.6s%2.6s%2.6s\n","a","b","c","f(a)","f(b)","f(c)");
    for(i=0;i<its;i++)
    {
         c=a-f(a)*((b-a)/(f(b)-f(a)));
         printf("%2.6lf %2.6lf  %2.6lf %2.6lf %2.6lf %2.6lf \n",a,b,c,f(a),f(b),f(c));
         
         if(f(c)<0)
         {
             a=c;
         }
         else
         {
             b=c;
         }   
    }
    c=a-f(a)*((b-a)/(f(b)-f(a)));
    printf("\nsonuc = %lf ",c);
    getchar();
    return 0;
    
}

