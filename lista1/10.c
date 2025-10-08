// Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
// aposentar. As condições para aposentadoria são:
// • Ter pelo menos 65 anos,
// • Ou ter trabalhado pelo menos 30 anos,
// • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
#include <stdio.h>

int main() {
  int idade, tempoTrabalho;
  printf("Digite a sua idade e seu tempo de trabalho: ");
  scanf("%d %d", &idade, &tempoTrabalho);
  if (idade >= 65 || tempoTrabalho >= 30 || (idade >= 60 && tempoTrabalho >= 25)) {
    printf("Você pode se aposentar!!\n");
  }
  else {
    printf("Você não pode se aposentar :(\n");
  }

  return 0;
}
