#include <stdlib.h>
#include "myFunctions.h"
#include <stdio.h>

void imprimirVetor(int *v, int s) {
  printf("Vetor: | ");
  for (int i = 0; i < s; i++) {
    printf("%d | ", v[i]);
  }
  printf("\n");
}

void imprimirLinkedList(Node *head) {
  Node *current = head;
  while (current != NULL) {
    printf("%d -> ", current->value);
    current = current->next;
  }
  printf("NULL\n");
}

Node* criarNode(int value) {
  Node *novoNode = malloc(sizeof(Node));
  if (!novoNode) {
    printf("Erro de alocação de memória!\n");
    exit(1);
  }
  novoNode->value = value;
  novoNode->next = NULL;
  return novoNode;
}

void appendNode(Node **head, int value) {
  Node *novoNode = criarNode(value);

  if (*head == NULL) {
    *head = novoNode;
    return;
  }

  Node *current = *head;
  while (current->next != NULL) {
    current = current->next;
  }
  current->next = novoNode;
}

void liberarLista(Node *head) {
  Node *tmp;
  while (head != NULL) {
    tmp = head;
    head = head->next;
    free(tmp);
  }
}
