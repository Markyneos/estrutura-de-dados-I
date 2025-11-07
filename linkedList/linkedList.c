#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int value;
  struct Node *next;
} Node;

Node *createLinkedList(int value) {
  Node *newNode = malloc(sizeof(Node));
  if (newNode == NULL) {
    printf("Erro na alocação de memória.\n");
    exit(1);
  }
  newNode->value = value;
  newNode->next = NULL;
  return newNode;
}

void appendNode(Node *head, int value) {
  Node *newNode = createLinkedList(value);
  if (head->next == NULL) {
    head->next = newNode;
  }
  else {
    Node *current;
    current = head;
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = newNode;
  }
}

void removeNode(Node *head, int value) {
  if (head == NULL) {
    printf("A lista é nula\n");
    return;
  }
  while (head->value == value) {
    Node *temp;
    temp = head;
    head = head->next;
    free(temp);
  }
  Node *before;
  Node *current;
  before = head;
  current = head->next;
  while (current != NULL) {
    if (current->value == value) {
      Node *temp;
      temp = current;
      current = current->next;
      before->next = current;
      free(temp);
    }
    else {
      current = current->next;
      before = before->next;
    }
  }
}

void printLinkedList(Node *head) {
  while (head != NULL) {
    printf("%d -> ", head->value);
    head = head->next;
  }
  printf("NULL\n");
}

int getNumberOfNodes(Node *head) {
  int count = 0;
  while (head != NULL) {
    count++;
    head = head->next;
  }
  return count;
}

int getNodeAtIndex(Node *head, int index) {
  if (index > getNumberOfNodes(head)) {
    printf("Insira um index menor que a quantidade de itens na lista (%d)", getNumberOfNodes(head));
    return -1;
  }
  Node *current;
  current = head;
  for (int i = 0; i < index; i++) {
    current = current->next;
  }
  return current->value;
}

void popNode(Node *head) {
  Node *current;
  current = head;
  for (int i = 0; i < getNumberOfNodes(head) - 1; i++) {
    current = current->next;
  }
  Node *temp;
  temp = current->next;
  current->next = NULL;
  free(temp);
}

void removeNodeFromIndex(Node *head, int index) {
  if (index > getNumberOfNodes(head)) {
    printf("Selecione um index com número menor que o número de elementos na lista.\n");
    return;
  }
  if (index == 0) {
    Node *temp;
    temp = head;
    head = head->next;
    free(temp);
    return;
  }
  Node *current;
  Node *before;
  before = head;
  current = head->next;
  if (index > 1) {
    for (int i = 0; i < index; i++) {
      before = before->next;
      current = current->next;
    }
  }
  Node *temp;
  temp = current;
  current = current->next;
  before->next = current;
  free(temp);
}

void freeLinkedList(Node *head) {
  while (head != NULL) {
    Node *temp;
    temp = head;
    head = head->next;
    free(temp);
  }
}

// int main() {
//   Node *head = createLinkedList(1);
//   appendNode(head, 2);
//   appendNode(head, 3);
//   appendNode(head, 3);
//   printLinkedList(head);
//
//   popNode(head);
//   printLinkedList(head);
//
//   appendNode(head, 3);
//   printLinkedList(head);
//
//   removeNode(head, 3);
//   printLinkedList(head);
//
//   appendNode(head, 3);
//   printLinkedList(head);
//
//   removeNodeFromIndex(head, 1);
//   printLinkedList(head);
//
//   freeLinkedList(head);
//
//   return 0;
// }
