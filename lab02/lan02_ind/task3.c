#include <stdio.h>
int main () {
double x, y,z;
printf("x= ");
scanf("%lf", &x);
printf("y= ");
scanf("%lf", &y);

if (x>=-2 && y>=-2 && y<=-2*x+2 || x<= -2 && y<=0 && y<=1 && x<=0 && y<=2*x-2 || x>=0 && y>=0 && z<=-2*x+2 || x>=0 && y<=0 && x*x+y*y<=4)
printf ("tochka popala");
else
printf ("tochka ne popala");
return 0;
}