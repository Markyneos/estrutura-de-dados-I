#ifndef ARVORE_BINARIA_H
#define ARVORE_BINARIA_H

typedef struct TreeNode {
  int value;
  struct Node *left;
  struct Node *right;
} TreeNode;

typedef struct ArvoreBinaria {
  Node *root;
  int height;
  int size;
} ArvoreBinaria;



#endif // !ARVORE_BINARIA_H
