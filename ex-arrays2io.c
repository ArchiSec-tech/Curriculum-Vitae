#include <stdio.h>;

int main() {
  int voti[4];
  voti[1]= 10;
  voti[2]= 8;
  voti[3]= 6;
  int media;
  
  media= (voti[1]+voti[2] + voti[3])/3;
  printf("la media dei voti è: %d", media);

  return 0;
}