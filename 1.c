#include <stdio.h>
#include <math.h>

int main() {
    int a, b;//оголошення змінних
    printf("Введіть два цілих числа: ");
    scanf("%d %d", &a, &b);

    int sum_of_cubes = a * a * a + b * b * b;//обчислюємо суму чисел у кубі
    printf("Сума чисел у кубі: %d\n", sum_of_cubes);

    float division_result = (float) b / a;//обчислюємо результат ділення
    printf("Результат ділення 2-го числа на 1-е: %f\n", division_result);

    int product = a * b;//обчислюємо добуток 
    printf("Добуток чисел: %d\n", product);

    return 0;//кінець програми
}
