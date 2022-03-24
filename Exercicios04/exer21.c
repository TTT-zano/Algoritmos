#include <stdio.h>

int main(){

  int x, sum = 0 , s = 0;

  for(int i=1; i < 20; i++){
  
    printf("Digite um valor para a soma: ");
    scanf("%d", &x);

    s = x/i;
    
    sum = s + s; 
  }
  printf("O valor de S = %d", s);

  return 0;
}
