#include <stdio.h>
int main()
{
double a1, b1, a2, b2;
printf("Введите стороны 1 прямоугольника \n");
printf("a1= "); scanf("%lf", &a1);
printf("b1= "); scanf("%lf", &b1);
printf("Введите стороны 2 прямоугольника \n");
printf("a2= "); scanf("%lf", &a2);
printf("b2= "); scanf("%lf", &b2);
double s1, s2;
s1 = a1 * b1;
s2 = a2 * b2;
if (s1 > s2)
printf("max S1, S= %.2f", s1);
else
printf("max S2, S= %.2f", s2);
return 0;
}
