#include <stdio.h>
int main() {
    
    int i;
    int numeri[5] = {1,2,3,4,5};
    int somma = 0;
    i= 0; i < 5; i++;
    
    for (int i = 0; i < 5; i++)
    {
        
        printf("stampa i numeri %d: %d\n", i, numeri[i]);

         printf("lasomma totale è: %d\n", somma);

    }
  for (int i = 0; i < 5; i++)
    {
        somma += numeri[i];
    }

    printf("la somma dei numeri è %d\n", somma);

    return 0;
}