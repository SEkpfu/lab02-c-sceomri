#include <stdio.h>
int main(){

double x, y;
    
printf("x= \n");
scanf("%lf", &x);
printf("y= \n");
scanf("%lf", &y);
    
if (x >= -2 && x <= 0 && y >= 0 && y <= 1) {
    printf("Точка принадлежит \n");}
else {
    printf("Точка не принадлежит \n");}
return 0;
}