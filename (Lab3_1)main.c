#include <stdio.h>
#include <math.h>

// Функція для обчислення значення y залежно від x
double calculate_y(double x) {



    // Умова 1: -5 <= x < 0
    if (x >= -5.0 && x < 0.0) {
        return x * x + 2.0 * x + 1.0;
    }



    // Умова 2: 0 <= x < 10
    else if (x >= 0.0 && x < 10.0) {
        return sqrt(x + 1.0) - 1.0 / sqrt(x + 5.0);
    }



    // Умова 3: 10 <= x < 1000
    else if (x >= 10.0 && x < 1000.0) {
        return log10(x) + 2.0 * x;
    }



    // Для усіх інших значень x
    else {
        return x / 2.0;
    }
}

int main() {
    double x;



    // Введення значення аргументу користувачем
    printf("Vvedit znachenna x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Pomilka: vvedeno nekorektne cislo.\n");
        return 1;
    }

    // Обчислення результату
    double y = calculate_y(x);

    // Виведення результату на екран з точністю до 4 знаків після коми
    printf("Dla x = %.4f, znachenna y = %.4f\n", x, y);

    return 0;
}
