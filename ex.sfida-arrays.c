 #include <stdio.h>
 int main() {
    int numeri[8] = {3, 17, 25, 9, 44, 12, 7, 30};
    int max = numeri[0];
    int i;
    for (i = 1; i < 8; i++){
    if (numeri[i] > max) {
        max = numeri [i];
    }
       printf("il risultato maximo è %d\n", max);                                                                    
}
    }



 
