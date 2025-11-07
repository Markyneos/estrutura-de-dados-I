#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node;
Node *createLinkedList(int value);
void appendNode(Node *head, int value);
void removeNode(Node *head, int value);
void printLinkedList(Node *head);
int getNodeAtIndex(Node *head, int index);
void popNode(Node *head);
void removeNodeFromIndex(Node *head, int index);
void freeLinkedList(Node *head);

#endif // !LINKEDLIST_H
