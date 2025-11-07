#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
  int value;
  struct TreeNode *left;
  struct TreeNode *right;
} TreeNode;

typedef struct TreeNode *BinTree;

BinTree *createBinTree() {
  BinTree *root = (BinTree*)malloc(sizeof(BinTree));
  if (root != NULL) {
    *root = NULL;
  }
  return root;
}

void preOrderBinTree(BinTree *root) {
  if (root == NULL) {
    printf("\n");
    return;
  }
  if (*root != NULL) {
    printf("%d ", (*root)->value);
    preOrderBinTree(&((*root)->left));
    preOrderBinTree(&((*root)->right));
  }
}

void inOrderBinTree(BinTree *root) {
  if (root == NULL) {
    printf("\n");
    return;
  }
  if (*root != NULL) {
    inOrderBinTree(&((*root)->left));
    printf("%d ", (*root)->value);
    inOrderBinTree(&((*root)->right));
  }
}

void postOrderBinTree(BinTree *root) {
  if (root == NULL) {
    printf("\n");
    return;
  }
  if (*root != NULL) {
    postOrderBinTree(&((*root)->left));
    postOrderBinTree(&((*root)->right));
    printf("%d ", (*root)->value);
  }
}

int totalNodesBinTree(BinTree *root) {
  if (root == NULL) {
    return 0;
  }
  if (*root == NULL) {
    return 0;
  }
  int totalLeft = totalNodesBinTree(&((*root)->left));
  int totalRight = totalNodesBinTree(&((*root)->right));

  return totalLeft + totalRight + 1;
}

int heightBinTree(BinTree *root) {
  if (root == NULL) {
    return -1;
  }
  if (*root == NULL) {
    return -1;
  }
  int leftHeight = heightBinTree(&((*root)->left));
  int rightHeight = heightBinTree(&((*root)->right));
  if (leftHeight > rightHeight) {
    return leftHeight + 1;
  }
  else {
    return rightHeight + 1;
  }

}

// void addNodeBinTree(BinTree *root, char side, int value) {
//   if (side == 'l') {
//     if ((*root)->left != NULL) {
//       addNodeBinTree((BinTree *)(*root)->left, side, value);
//     }
//     else {
//       TreeNode *newNode = (TreeNode *)malloc(sizeof(TreeNode));
//       newNode->value = value;
//       newNode->left = NULL;
//       newNode->right = NULL;
//       (*root)->left = newNode;
//     }
//   }
//   else {
//     if ((*root)->right != NULL) {
//       addNodeBinTree((BinTree *)(*root)->right, side, value);
//     }
//     else {
//       TreeNode *newNode = (TreeNode *)malloc(sizeof(TreeNode));
//       newNode->value = value;
//       newNode->left = NULL;
//       newNode->right = NULL;
//       (*root)->right = newNode;
//     }
//   }
// }
//
void addNodeBinTree(BinTree *root, int value) {
  if ((*root)->value < value) {
    if ((*root)->right != NULL) {
      addNodeBinTree((BinTree *)(*root)->right, value);
    }
    else {
      TreeNode *newNode = (TreeNode *)malloc(sizeof(TreeNode));
      newNode->value = value;
      newNode->right = NULL;
      newNode->left = NULL;
      (*root)->right = newNode;
    }
  }
  else {
    if ((*root)->left != NULL) {
      addNodeBinTree((BinTree *)(*root)->left, value);
    }
    else {
      TreeNode *newNode = (TreeNode *)malloc(sizeof(TreeNode));
      if (newNode == NULL) {
        printf("Erro na alocação de memória.\n");
        return;
      }
      newNode->value = value;
      newNode->right = NULL;
      newNode->left = NULL;
      (*root)->left = newNode;
    }
  }
}

int main() {
  printf("Início\n");

  return 0;
}
