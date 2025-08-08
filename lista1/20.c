#include <stdio.h>


int main() {
  int indice = 0;
  printf("Digite o índice do Triângulo de Pascal: ");
  scanf("%d", &indice);
  int mat[indice][indice];

  for (int i = 1; i <= indice; i++) {
    for (int j = 0; j < i; j++) {
      if (j == 0 || j == i - 1) {
        printf("%d ", 1);
        mat[i - 1][j] = 1;
      }
      else if (j == 1 || j == i - 2){
        printf("%d ", i - 1);
        mat[i - 1][j] = i - 1;
      }
      else {
        printf("%d ", mat[i - 2][j -1] + mat[i - 2][j]);
        mat[i - 1][j] = mat[i - 2][j -1] + mat[i - 2][j];
      }
    }
    printf("\n");
  }
  
  return 0;

}
