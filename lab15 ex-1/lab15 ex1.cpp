
#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char* argv[]) {
    setlocale(0, "");

    double P = 1.0;
    double factorial, z, Q;

    for (int i = 1; i <= 25; i++) {
        factorial = 1;
        int j = 1;

        while (j <= i) {
            factorial *= j;
            j++;
        }

        z = (double)(i * i + 2 * i + 3);
        Q = factorial / z;
        P = P * Q;
    }

    printf("\n Результат: Р=%e=%.3f", P, P);

    return 0;
}