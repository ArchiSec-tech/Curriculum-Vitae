#include <stdio.h>
int main () {
    int calcolo;
    float base= (5,14);
    float altezza= (9,14);
    calcolo = (base * altezza / 2);
    printf("il risultato di base*altezza è %d\n", calcolo);

    return 0;

}

👉 Versione corretta:

#include <stdio.h>
int main() {
    float base = 5.14;
    float altezza = 9.14;
    float calcolo = (base * altezza) / 2;
    printf("Il risultato di base*altezza/2 è %f\n", calcolo);
    return 0;
}