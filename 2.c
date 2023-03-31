#include <stdio.h>
#include <math.h>

int main() {
    // Задані сталі величини
    int a = 1, b = 15, c = 7;

    // Обчислюємо значення функції
    float y = 2 * a + 1 + c / (float)b - 3 * b + c / (float)c;

    // Виводимо значення функції на екран
    printf("Значення функції: %.2f\n", y);

    return 0;
}
