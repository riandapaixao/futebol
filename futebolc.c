#include <stdio.h>

int main() {
  int timea, timeb;

  printf("Digite o placar de cada time no final do jogo\n");

  printf("Time A qual foi o Placar?\n");
  scanf("%d", &timea);

  printf("Time B qual foi o Placar?\n");
  scanf("%d", &timeb);

  
  printf("O Placar do Time A %d\n", timea);
  printf("O Placar do Time B %d\n", timeb);

  if(timea==timeb){
    printf("EMPATE");
  }
  else if(timea > timeb ){
    printf("O Jogo terminou com a vitória do TIME A\n");
  }
  else{
    printf("O Jogo terminou com a vitória do TIME B\n");
  }
 
 
  
  return 0;
}