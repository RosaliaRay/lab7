/*
    Студент: Мареева Ангелина Ильинична
    Группа: ПИ 11
    Назначение: Копия массива с заменой отрицателььных элементов
*/

#include <stdio.h>
#define MAX_SIZE 100

int main(void) {
    int a[MAX_SIZE], b[MAX_SIZE];
    int n;
    int zamena = 0;
    long long sum_b = 0;

    printf("Enter n (1..100): ");
    if (scanf("%d", &n) != 1) {
        printf("Input error\n");
        return 1;
    }
    if (n < 1 || n > MAX_SIZE) {
        printf("Size error\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("a[%d]: ", i);
        if (scanf("%d", &a[i]) != 1) {
            printf("Input error\n");
            return 1;
        }
        if (a[i] < -1000 || a[i] > 1000) {
            printf("Value error\n");
            return 1;
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            b[i] = 0;
            zamena++;
        } else {
            b[i] = a[i];
        }
        sum_b += b[i];
    }

    printf("a: ");
    for (int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");

    printf("b: ");
    for (int i = 0; i < n; i++) {
        printf(" %d", b[i]);
    }
    printf("; замен %d; сумма %lld; a сохранён\n", zamena, sum_b);
    return 0;
}