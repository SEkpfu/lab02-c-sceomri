#include <stdio.h>
int main(){
    int b_d, b_m, b_y;
    int c_d, c_m, c_y;
    
    printf("Введите дату рождения (день месяц год): ");
    scanf("%d %d %d", &b_d, &b_m, &b_y);
    
    printf("Введите текущую дату (день месяц год): ");
    scanf("%d %d %d", &c_d, &c_m, &c_y);
    
    int age = c_y - b_y;
    
    if (c_m < b_m || 
        (c_m == b_m && c_d < b_d)) {
        age--;
    }
    
    char *year_word;
    if (age % 10 == 1 && age % 100 != 11) {
        year_word = "год";
    } else if (age % 10 >= 2 && age % 10 <= 4 && 
              !(age % 100 >= 12 && age % 100 <= 14)) {
        year_word = "года";
    } else {
        year_word = "лет";
    }
    
    printf("Вам %d %s\n", age, year_word);
    
    return 0;
}