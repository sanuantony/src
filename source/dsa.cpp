#include "../header/dsa.h"
#include "../header/helper.h"

Node *Insert(int data, Node *head)
{
    auto current = head;

    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
        return newNode;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
    return head;
}

Node *InsertAtPosition(int data, int position, Node *head)
{
    if (head == nullptr || position == 1)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        return newNode;
    }
    Node *current = head;
    int i = 2;
    while (current->next != NULL)
    {
        if (i == position)
        {
            Node *newNode = new Node;
            newNode->data = data;
            newNode->next = current->next;
            current->next = newNode;
            return head;
        }
        i++;
        current = current->next;
    }
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    current->next = newNode;
    return head;
}

/// @brief Deleting a specific data from linked list
/// @param data
/// @param head
/// @return address of the head
Node *Delete(int data, Node *head)
{
    Node *current = head;
    Node *previous = head;
    if (head == nullptr)
        return nullptr;
    if (head->data == data)
    {
        auto temp = head->next;
        delete (head);
        return temp;
    }
    while (current != nullptr)
    {
        if (current->data == data)
        {
            auto temp = current;
            current = current->next;
            previous->next = current;
            delete (temp);
            return head;
        }
        previous = current;
        current = current->next;
    }
    return head;
}

void PrintList(Node *head)
{
    auto current = head;
    if (current == nullptr)
    {
        println("List is empty.....");
        return;
    }
    while (current != NULL)
    {
        print(current->data);
        std::cout << "\t";
        current = current->next;
    }
}
 void SortList(Node *head)
{
    if (head == nullptr || head->next == nullptr)
        return ;
    auto current = head;
    while (current != nullptr)
    {
        auto counter = current;
        while (counter != nullptr)
        {
            if (current->data > counter->data)
                std::swap(current->data, counter->data);
            counter = counter->next;
        }
        current = current->next;
    }
}