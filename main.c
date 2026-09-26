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

     // Реалізація обчислень для Варіанту № 21
    if (x >= -10.0 && x < -2.0) {
        y = pow(x, 3) - 2.0 * x * x + fabs(x);
    }
    else if (x >= 4.0 && x < 12.0) {
        double fraction = (pow(x, 3) - 1.0) / sqrt(x + 2.0);
        y = 2.0 * sqrt(x - 2.0) - pow(fraction, 3);
    }
    else if (x >= 100.0 && x < 10000.0) {
        y = log10(2.0 * x) / 4.0;
    }
    else {
        y = -x / 5.0 + 2.0;
    }

    printf("Результат: y = %.4f\n", y);

    return 0;
}

