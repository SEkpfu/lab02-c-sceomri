#include <stdio.h>
int main()
{
    double x, f;
    printf("x= \n");
    scanf("%lf", &x);

    if (x <= -2)
       f = 0;
    else if (x <= 10)
       f = x * x + 4 * x + 5;
    else
       f = 1.0/ (x * x + 4 * x + 5);
       
    printf("f(x) = %.4f\n", f);
    
    return 0;
}