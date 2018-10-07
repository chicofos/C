#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

void Insert(int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node)); //creates a new node in memory
    temp->data = x;                                                 //sets the value
    temp->next = head;                                              //points to previous node
    head = temp;
}

void Print()
{
    struct Node *temp = head; //temp node to traverse the list
    printf("List is: ");
    while (temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void Reverse()
{
    
}

int main()
{
    head = NULL;

    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);

    Reverse();
    Print();
}