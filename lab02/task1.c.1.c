#include <stdio.h>

int main()
{
    double a1, b1, a2, b2,a3,b3;
    printf("Введите стороны 1 прямоугольника \n");
    printf("a1= "); scanf("%lf", &a1);
    printf("b1= "); scanf("%lf", &b1);

    printf("Введите стороны 2 прямоугольника \n");
    printf("a2= "); scanf("%lf", &a2);
    printf("b2= "); scanf("%lf", &b2);

    printf("Введите стороны 3 прямоугольника \n");
    printf("a3= "); scanf("%lf", &a3);
    printf("b3= "); scanf("%lf", &b3);

    double s1, s2,s3;
    s1 = a1 * b1;
    s2 = a2 * b2;
    s3= a3 * b3;

    if (s1 > s2 && s1 > s3)
        printf("max S1, S = %.2f\n", s1);
    else if (s2 > s1 && s2 >s3)
        printf("max S2, S = %.2f\n", s2);
    else
        printf("max S3, S = %.2f\n", s3);

    return 0;
}