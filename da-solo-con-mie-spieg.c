#include <stdio.h>     
int main() {        //apriamo la prima funzione
int numeri[5] = {1,2,3,4,5};     //variabili e le loro dichiarazioni
int somma = 0;

 
    for ( int i = 0; i < 5; i++) {       // apro il ciclo for, senza il ; e poi con {}
        printf ("elemento %d: %d\n", i, numeri[i]);   // printf per stampare: testo+ "carattere" per gli interi: dichiaro il carattere per gli interi per la variabile i e per numeri i arrays
        somma += numeri[i];    // si somma direttamente dentro al ciclo.
    }                    // si chiude il ciclo for senza ;

   printf ( "stampa la somma %d", somma);             // si stampa la somma

    return 0;               // si chiede il ritorno per dire che si ha finito

}