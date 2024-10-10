#include <stdio.h>
#include <math.h>

int main()
{
int i=0;
double x = 0.000000;
double h;
printf("Введиде шаг h для x\n");
scanf("%lf", &h);

for(x;(x-1.6)<(0.0000000001);x=x+h)
{
    printf("%f  %f \n", x, 1/(1+(25*x*x)));
}

for(x;(x-1.6)<(0.0000000001);x=x+h)
{
    printf("%f  %f \n", x, x+2*pow(x,4)*sin(x*x));
}

return 0;
}