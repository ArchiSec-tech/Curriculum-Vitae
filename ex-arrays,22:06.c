#include <stdio.h>
int main() {
    int i;
    int numero[5] = {1,2,3,4,5};

   for (int i=0; i < 5; i++){

    printf("stampa i numeri in sequenza %d: %d\n",i, numero[i]);
   }
    return 0;
}