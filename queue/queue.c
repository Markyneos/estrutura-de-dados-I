#include "../myFunctions/myFunctions.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct Queue {
  int size;
  int max;
  struct Node *head;
  struct Node *tail;
} Queue;

Queue *createQueue(int max) {
  Queue *newQueue = malloc(sizeof(Queue));
  if (newQueue == NULL) {
    printf("Erro na alocação de memória.");
    exit(1);
  }
  newQueue->head = NULL;
  newQueue->max = max;
  newQueue->size = 0;
  newQueue->tail = NULL;
  return newQueue;
}

void enQueue(Queue *queue, int val) {
  Node *newNode = malloc(sizeof(Node));
  if (newNode == NULL) {
    printf("Erro na alocação de memória");
    exit(1);
  }
  newNode->value = val;
  newNode->next = NULL;
  if (queue->head == NULL) {
    queue->head = newNode;
    queue->tail = newNode;
    queue->size++;
  }
  else {
    if (queue->size < queue->max) {
      queue->tail->next = newNode;
      queue->tail = newNode;
      queue->size++;
    }
    else {
      printf("Erro: número máximo de elementos já foi alcançado");
    }
  }
}

void deQueue(Queue *queue) {
  if (queue->head == NULL) {
    return;
  }
  Node *temp = queue->head;
  queue->head = queue->head->next;
  free(temp);
  queue->size--;
}

int main() {
  Queue *queue = createQueue(5);
  enQueue(queue, 1);
  enQueue(queue, 2);
  enQueue(queue, 3);

  imprimirLinkedList(queue->head);

  liberarLista(queue->head);

  return 0;
}
