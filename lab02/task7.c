#include <stdio.h>

int main(){
    double num1, num2, result;
    char operation;
    printf("write number \n");
    scanf("%lf", &num1);
    printf("write number \n");
    scanf("%lf", &num2);
    printf("Введите арифметическую операцию: +, -, *, / = ");
    scanf(" %c", &operation);
    switch (operation)
    {
    case '+':
    result = num1 + num2;
    printf("%.2lf + %.2lf = %.2lf \n", num1, num2, result); break;
            
    case '-':
    result = num1 - num2;
    printf("%.2lf - %.2lf = %.2lf \n", num1, num2, result); break;
            
    case '*':
    result = num1 * num2;
    printf("%.2lf * %.2lf = %.2lf \n", num1, num2, result); break;
    
    case '/':
    if (num2 != 0) {
    result = num1 / num2;
    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result); break; }
    
    
    else {
    printf("Ошибка:нельзя делить на 0 \n");} break;

    default:
    printf("Допустимые операции: +, -, *, / \n"); break;
    }
    return 0;
}