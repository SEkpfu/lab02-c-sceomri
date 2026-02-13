#include <stdio.h>
int main(){
double x, y, z;
    
printf("Write x y z: \n");
scanf("%lf %lf %lf", &x, &y, &z);
    
if (x <= 0 || y <= 0 || z <= 0) {
    printf("Ошибка:числа должны быть положительными \n");
return 1;}
if (x==y && x==z){
    printf("равносторонний треугольник");}
if (x==y || x==z || y==z){
    printf("равнобедренный треугольник");}
else if {
    printf("треугольник разносторонний");}
else {
    printf("Треугольник не существует");}
return 0;
}