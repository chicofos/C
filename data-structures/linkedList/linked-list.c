#include<stdlib.h>
#include<stdio.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head;

void Insert(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); //creates a new node in memory
    temp->data = x; //sets the value
    temp->next = head; //points to previous node
    head = temp; //insert new node at the beginnig
}

void Print(){
    struct Node* temp = head; //temp node to traverse the list
    printf("List is: ");
    while(temp != NULL){
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    head = NULL; //empty list
    int n, i, x;
    printf("How many numbers \n");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        printf("Enter the number \n");
        scanf("%d", &x);
        Insert(x);
        Print();
    }
}