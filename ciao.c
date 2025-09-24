#include <stdio.h>
int main() {
    int i = 0;
int numero[10]= {0,1,2,3,4,5,6,7,8,9};
for (i = 0; i < 10; i++) {
    if (numero[i] % 2 == 0) {
    printf ("il numero è pari %d\n", numero [i]);
} 

else {
    printf("altrimenti è dispari %d\n");
}

}

return 0;


}

