#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definindo variáveis

void main(){
  int a = 10;
  int b = 5;

  // Soma
  printf("\n A soma entre %d e %d e igual = %d", a, b, a + b);

   // subtração
  printf("\n A subtracao entre %d e %d e igual = %d", a, b, a - b);

   // divisao
  printf("\n A divisao entre %d e %d e igual = %d", a, b, a / b);

   // multiplicação
  printf("\n A multiplicacao entre %d e %d e igual = %d", a, b, a * b);

   // Resto da divisão
  printf("\n O resto da divisao entre %d e %d e igual = %d", a, b, a % b);

   // Valor absoluto
  printf("\n O valor absoluto de -3 e igual = %d", abs(-3));
}