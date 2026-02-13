#include <stdio.h>
int main() {
    int x;
    double a, b, result;

    printf("Введите номер: 1:+, 2:-, 3:*, 4:/: ");
    scanf("%d", &x);

    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf",&b);

    switch (x) {
        case 1:
            result = a + b;
            printf("result: %.3f \n", result);break;
        case 2:
            result = a - b;
            printf("result: %.3f \n", result);break;
        case 3:
            result = a * b;
            printf("result: %.3f \n", result);break;
        case 4:
            if (b != 0) {
                result = a / b;
                printf("result: %.3f \n", result);
            } else {
                printf("Ошибка: деление на 0 \n");} break;
        default:
            printf("Выберите числа от 1 до 4 \n");}
    return 0;
}