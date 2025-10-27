#include "../myFunctions/myFunctions.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
  Node *top;
  int size;
} Stack;

Stack *createStack() {
  Stack *newStack = malloc(sizeof(Stack));
  newStack->top = NULL;
  newStack->size = 0;
  return newStack;
}

void push(Stack *stack, int val) {
  Node *newNode = malloc(sizeof(Node));
  if (newNode == NULL) {
    printf("Erro na alocação de memória\n");
    exit(1);
  }
  newNode->value = val;
  newNode->next = stack->top;
  stack->top = newNode;
  stack->size++;
  }

void pop(Stack *stack) {
  if (stack->top != NULL) {
    Node *temp = NULL;
    temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    stack->size--;
  }

}


int isEmpty(Stack *stack) {
  if (stack->top == NULL) {
    return 1;
  }
  return 0;
}

int main() {
  Stack *stack = createStack();
  push(stack, 1);
  push(stack, 2);
  push(stack, 3);

  imprimirLinkedList(stack->top);

  pop(stack);

  imprimirLinkedList(stack->top);

  for (int i = 0; i <= stack->size; i++) {
    pop(stack);
  }
  imprimirLinkedList(stack->top);

  return 0;
}
