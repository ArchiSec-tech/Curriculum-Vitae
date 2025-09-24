#include <stdio.h>

int main() {
    int numeri[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // Dichiarazione dell'array

    for (int i = 0; i < 10; i++) { // Ciclo per controllare ogni numero
        if (numeri[i] % 2 == 0) {
            printf("Il numero %d è pari\n", numeri[i]);
        }
         else {
            printf("Il numero %d è dispari\n", numeri[i]);
        }
    }

    return 0;
}