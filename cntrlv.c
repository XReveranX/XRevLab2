#include <stdio.h>
#include <math.h>
#include <unistd.h>

FILE *output;
FILE *gp;

int main()
{
gp = popen("gnuplot -","w");
output = fopen("gplot.dat","w");

double x = 0.000000;
double h;
printf("Введиде шаг h для x\n");
scanf("%lf", &h);

fprintf(output,"%f %f \n",x ,(1/(1+(25*x*x))));
fprintf(gp, "set xlabel 'x' \n");
fprintf(gp, "set ylabel 'f(x)' \n");
fprintf(gp, "plot './gplot.dat' with lines title 'f(x)'\n");

do
{
    printf("%f  %f \n", x, 1/(1+(25*x*x)));
    x=x+h;
    fprintf(output,"%f %f \n",x ,(1/(1+(25*x*x))));
    fflush(output); 
    usleep(1000);
    fprintf(gp, "replot \n");
    fflush(gp);
}
while((x-0.6)<(0.0000000001));

do
{
    printf("%f  %f \n", x, x+2*pow(x,4)*sin(x*x));
    x=x+h;
    fprintf(output,"%f %f \n",x ,(x+2*pow(x,4)*sin(x*x)));
    fflush(output); 
    usleep(1000);
    fprintf(gp, "replot \n");
    fflush(gp);
}
while((x-1.6)<(0.0000000001));

fclose(gp);
fclose(output);

return 0;
}
