#include <stdio.h>
#include <math.h>

int main()
{
double x = 0.000000;
double h;
printf("Введиде шаг h для x\n");
scanf("%lf", &h);

do
{
    printf("%f  %f \n", x, 1/(1+(25*x*x)));
    x=x+h;
}
while(x<=0.6);

do
{
    printf("%f  %f \n", x, x+2*pow(x,4)*sin(x*x));
    x=x+h;
}
while(x<=1.6);

return 0;
}
