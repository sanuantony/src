#pragma once
struct Node
{
    Node* next;
    int data;
};
typedef struct Node Node;

Node* Insert(int data, Node* head);
Node* InsertAtPosition(int data, int position, Node* head);
Node* Delete(int data, Node* head);
void PrintList(Node* head);
void SortList(Node* head);
