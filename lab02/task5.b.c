#include <stdio.h>
int main(){
    double x, y, z, a, b;
    
    printf("write x= \n ");
    scanf("%lf", &x);
    printf("write y= \n ");
    scanf("%lf", &y);
    printf("write z= \n ");
    scanf("%lf", &z);
    printf("write a= \n ");
    scanf("%lf", &a);
    printf("write b= \n ");
    scanf("%lf", &b);
    
    if ((x <= a && y <= b) || (x <= b && y <= a) ||
        (x <= a && z <= b) || (x <= b && z <= a) ||
        (y <= a && z <= b) || (y <= b && z <= a)) {
        printf("Кирпич пролезет через отверстие \n");
    } else {
        printf("Кирпич не пролезет через отверстие \n");
    }
    return 0;
}