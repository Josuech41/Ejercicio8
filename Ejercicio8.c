#include <stdio.h>

int perfecto(int num);

int main() {
    printf("Numeros perfectos entre 1 y 1000:\n");

    for (int i = 1; i <= 1000; i++) {
        if (perfecto(i)) {
            printf("%d es un número perfecto. Factores: ", i);

            for (int j = 1; j < i; j++) {
                if (i % j == 0) {
                    printf("%d ", j);
                }
            }
            printf("\n");
        }
    }

    return 0;
}

int perfecto(int num) {
    int suma = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            suma += i;
        }
    }

    return suma == num;
}
