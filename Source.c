#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
    system("chcp 1251");
    int month, year, days;
    printf("Введите номер месяца (1-12): ");
    scanf("%d", &month);
    printf("Год високосный? (1 - да, 0 - нет): ");
    scanf("%d", &year);
    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    case 2:
        switch (year) {
        case 1:
            days = 29;
            break;
        case 0:
            days = 28;
            break;
        default:
            printf("Неверный выбор года!");
            return 0;
        }
        break;
    default:
        printf("Неверный номер месяца!");
        return 0;
    }
    printf("Количество дней в %d месяце: %d\n", month, days);
    return 0;
}