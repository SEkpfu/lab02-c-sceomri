#include <stdio.h>
int main()
{
int x; //переменная для хранения оценки
printf("введите свою оценку: ");
scanf("%d", &x);
//оператор множественного выбора
switch (x) {
case 5: printf("отлично"); break;
case 4: printf("хорошо"); break;
case 3: printf("удовлетворительно"); break;
case 2: printf("неудовлетворительно");
case 1: printf("плохо"); break;
default: printf("неверныe данные");
}
return 0;
}