#include <stdio.h>

int main(){

double x, y, z;
    
printf("Write x y z: \n");
scanf("%lf %lf %lf", &x, &y, &z);
    
if (x <= 0 || y <= 0 || z <= 0) {
    printf("Ошибка:числа должны быть положительными \n");
return 1;}
if (x + y > z && x + z > y && y + z > x) {
    printf("Треугольник существует\n");}
    return 0;
}