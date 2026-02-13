#include <stdio.h>
int main() {
    int x;
    printf("x: ");
    scanf("%d", &x);

    if (x % 10== 1 && x%100 !=11){
        printf("Дульсинея спрятала %d lozhky", x);}
    else if (x%10>=2 && x%10<=4 && (x%100<10 || x%100 >=20)){
        printf("Дульсинея спрятала %d lozhki", x);}
    else  {
        printf("Дульсинея спрятала %d lozhek", x);}

     return 0;
}