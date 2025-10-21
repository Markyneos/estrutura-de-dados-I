#ifndef MY_FUNCTIONS_H
#define MY_FUNCTIONS_H

typedef struct Node {
  int value;
  struct Node *next;
} Node;

typedef struct Lista {
  Node *head;
} Lista;

void imprimirVetor(int *v, int s);

void imprimirLinkedList(Node *head);

Node *criarNode(int value);

void appendNode(Node **head, int value);

void liberarLista(Node *head);

#endif // MY_FUNCTIONS_H
