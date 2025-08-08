//Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida.
// Escreva uma mensagem de erro se a opção for inválida.
#include <stdio.h>

int main() {
  int opcao = 0, num1, num2;
  printf("Escolha a opção: \n");
  printf("1 - Soma de dois números.\n2 - Diferença de dois números (maior pelo menor).\n3 - Produto entre dois números.\n4- Divisão entre dois números (o denominador não pode ser zero).\n");
  scanf("%d", &opcao);
  printf("Digite dois números: ");
  scanf("%d %d", &num1, &num2);
  switch (opcao) {
    case 1:
      printf("%d\n", num1 + num2);
      break;
    case 2:
      printf("%d\n", num1 > num2 ? num1 - num2 : num2 - num1);
      break;
    case 3:
      printf("%d\n", num1 * num2);
      break;
    case 4:
      if (num2 == 0) {
        printf("O denominador não pode ser zero.\n");
      }
      else {
        printf("%d\n", num1 / num2);
      }
      break;
    default:
      printf("Opção inválida\n");
  }

  return 0;
}
