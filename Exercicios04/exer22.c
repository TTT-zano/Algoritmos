#include <stdio.h>

int main(void){

  float fulano = 1.50, ciclano = 1.10, c1=0, c2=0;
  int i, dias;


  for(i = 0;c1 > c2; i++){
    dias = dias + i;
    c1 = fulano + 2;
    c2 = ciclano + 3;
  }
  printf("\nDias: %d\n", dias);
  return 0;
}
