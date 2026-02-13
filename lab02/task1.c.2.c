#include <stdio.h>
int main()
{
    double a1, b1, a2, b2, a3, b3;
    printf("Введите стороны 1 прямоугольника \n ");
    printf("a1= "); scanf("%lf", &a1);
    printf("b1= "); scanf("%lf", &b1);
    printf("Введите стороны 2 прямоугольника \n ");
    printf("a1= "); scanf("%lf", &a1);
    printf("b1= "); scanf("%lf", &b1);
    printf("Введите стороны 3 прямоугольника \n ");
    printf("a1= "); scanf("%lf", &a1);
    printf("b1= "); scanf("%lf", &b1);
    
    double s1 = a1 * b1;
    double s2 = a2 * b2;
    double s3 = a3 * b3;

    double maxS12 = (s1 > s2 ? s1 : s2);
    double max_all = (maxS12 > s3 ? maxS12 : s3);

    printf("Максимальная площадь = %.2f\n", max_all);

    return 0;
}