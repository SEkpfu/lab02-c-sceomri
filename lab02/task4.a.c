#include <stdio.h>
int main(){
int dM, dW;
printf("Введите дату: \n");
printf("День месяца: ");
scanf("%d", &dM);
printf("Номер дня в неделе: ");
scanf("%d", &dW);
if (13 ==dM)
if (2 ==dW || 5 ==dW)
printf("Будьте осторожнее \n");
return 0;
}
