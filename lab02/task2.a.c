#include <stdio.h>
int main()
{
    int x;
    printf("Введите целое число \n ");
    printf("x= ");
    scanf("%d", &x);

    if (x > 0)
         printf("Число положительное \n");
    else if (x < 0)
     printf("Число отрицательное \n");
    else printf("Число = 0 \n");         
    return 0;
}