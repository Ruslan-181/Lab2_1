#include <stdio.h>
#include <math.h>

int main(void) {

    double x = 0.0;
    double y = 0.0;

    printf("Введіть значення x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Помилка введення даних.\n");
        return 1;
    }

     // Повна реалізація обчислень для Варіанту № 1
    if (x >= -5.0 && x < 0.0) {
        y = x * x + 2.0 * x + 1.0;
    }
    else if (x >= 0.0 && x < 10.0) {
        y = sqrt(x + 1.0) - (1.0 / sqrt(x + 5.0));
    }
    else if (x >= 10.0 && x < 1000.0) {
        y = log10(x) + 2.0 * x;
    }
    else {
        y = x / 2.0;
    }

    printf("Результат: y = %.4f\n", y);



    return 0;
}
