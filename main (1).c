//Faça uma função, sem retorno, que recebe a idade do usuário por parâmetro, verifica
//e informa se ele é maior de idade ou não
#include <stdio.h>
#include <locale.h>
int main(){
 int idade;
  printf("Digite sua idade:");
  scanf("%d",&idade);
  if (idade<18){
      printf("menor de idade");
  }
  else if (idade>=18){
      printf("maior de idade");
  }
  return 0;
}