#include <stdio.h>

int main(){

  int i, N, c; 
  float soma = 1, fatorial;
  
  printf("\nO valor para a soma:\n");
  scanf("%d", &N);
  for(i = 1; i < N; i++){

    fatorial=1;
      for(c=1; c<=i; c++){
        fatorial *= c;
      }
    soma += 1/fatorial;
  }
  printf("\nA soma igual a: %.4f\n", soma);
  return 0;
}

