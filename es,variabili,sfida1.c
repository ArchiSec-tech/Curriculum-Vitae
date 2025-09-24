#include <stdio.h>
int main() {
    int calcola;
    int a= 1;
    int b=2;
    int c= 3;
    calcola=(a= b - c + b * c);
    printf("il risultato dell' espressione è %d\n", calcola);
    
    return 0;
}

GIUSTO!!!
👉 Versione più chiara:

#include <stdio.h>
int main() {
    int a = 1, b = 2, c = 3;
    int calcola;
    calcola = b - c + b * c;  // calcolo diretto
    printf("Il risultato dell'espressione è %d\n", calcola);
    return 0;
}