#include <stdio.h>

int main(){

  int i, N, c; 
  float soma = 1, fatorial;
  
  printf("O valor para a soma:\n");
  scanf("%d", &N);
  for(i = 1; i < N; i++){

    fatorial=1;
      for(c=1; c<=i; c++){
        fatorial *= c;
      }
    soma += 1/fatorial;
  }
  printf("A soma igual a: %.2f", soma);
  return 0;
}

