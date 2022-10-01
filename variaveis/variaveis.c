#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL,"");
  
  //Int = Para números interiros, não fracionados, positivos e negativos.

  int num1 = 50;

  printf(" \nO \n valor de num1 e = %d \n", num1);  //\n quebra de linha
  scanf("%d", &num1);  //scanf permite a alteração da variável apos sua criação
  printf("O \n valor de num1 mudou para = %d", num1); // %d somente para numeros inteiros

  // Float = Para números fracionados, positivos e negativos
  float b = 5.5;

  printf("O \n valor de b e = %f \n", b);
  scanf("%f", &b);
  printf("O \n valor de b mudou para = %f \n", b); // %f para números fracionados

  // Char = Para letras unitarias
  char letra = 't';

  printf("O \n valor de letra e = %c \n", letra);
  fflush(stdin); // para executar de forma correta o tipo char, usa-se fflush para limpar a memória
  scanf("%c", &letra);
  printf("O \n valor de letra mudou para = %c \n", letra); // %c para char
}
