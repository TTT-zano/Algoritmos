#include <stdio.h>

int main(){

  int a=0, b=1, c=2, N, M=0;
    
    printf("\nInsira um numero inteiro\n");
    scanf("%d", &N);

  
  if(while(M != N)){
    a++;
    b++;
    c++;
    M = a*b*c;
  }else{
    printf("\nO numero proposto não é triangular\n");
  }
  
  printf("\n%d é um numero triangular de %d %d %d\n", N,a,b,c);
  

  return 0;
}
