#include <stdio.h>
#include <math.h>

int main()
{
int i=0;
double x = 0.000000;
double h;
scanf("%lf", &h);

for(x;x<=0.6;x=x+h)
{
    printf("%f  %f \n", x, 1/(1+(25*x*x)));
}

for(x;x<=1.6;x=x+h)
{
    printf("%f  %f \n", x, x+2*pow(x,4)*sin(x*x));
}

return 0;
}