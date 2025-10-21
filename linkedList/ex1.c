#include "../myFunctions/myFunctions.h"
#include <stdio.h>
#include <stdlib.h>

Node *concatLinkedLists(Node *head1, Node *head2) {
  Node *headFinal = NULL, *tail = NULL;
  Node *temp = head1;

  while (temp != NULL) {
    Node *newNode = malloc(sizeof(Node));
    if (newNode == NULL) {
      printf("Erro ao alocar memória!\n");
      exit(1);
    }
    newNode->value = temp->value;
    newNode->next = NULL;

    if (headFinal == NULL) {
      headFinal = newNode;
      tail = newNode;
    }
    else {
      tail->next = newNode;
      tail = newNode;
    }

    temp = temp->next;
  }

  temp = head2;
  while (temp != NULL) {
    Node *newNode = malloc(sizeof(Node));
    if (newNode == NULL) {
      printf("Erro ao alocar memória!\n");
      exit(1);
    }
    newNode->value = temp->value;
    newNode->next = NULL;

    if (headFinal == NULL) {
      headFinal = newNode;
      tail = newNode;
    }
    else {
      tail->next = newNode;
      tail = newNode;
    }

    temp = temp->next;
  }

  return headFinal;
}

int main() {
  Node *list1 = NULL;
  appendNode(&list1, 1);
  appendNode(&list1, 3);
  appendNode(&list1, 5);

  Node *list2 = NULL;
  appendNode(&list2, 2);
  appendNode(&list2, 4);
  appendNode(&list2, 6);

  printf("Lista 1: ");
  imprimirLinkedList(list1);

  printf("Lista 2: ");
  imprimirLinkedList(list2);

  Node *list3 = NULL;
  list3 = concatLinkedLists(list1, list2);
  printf("Lista 3: ");
  imprimirLinkedList(list3);

  liberarLista(list1);
  liberarLista(list2);
  liberarLista(list3);

  return 0;
}
