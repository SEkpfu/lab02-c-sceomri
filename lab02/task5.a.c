#include <stdio.h>
#include <math.h>
int main()
{
    double r, a, b, z, c;
    
    printf("write r= \n ");
    scanf("%lf", &r);
    printf("a= ");
    scanf("%lf", &a);
    printf("b= ");
    scanf("%lf",&b);
    printf("write z= \n ");
    scanf("%lf", &z);
    printf("write c= \n ");
    scanf("%lf", &c);
    
    if (2*r <= a && 2*r <= b && z <= c){
        printf("Торт помещается в коробку \n");}
        else {
        printf("Торт не помещается в коробку \n");
    }
    
    return 0;
}