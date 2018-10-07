#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* head;

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

void Delete(int n){
    struct Node* temp1 = head;
    
    if(n == 1){
        head = temp1->next;
        free(temp1);
        return;
    }

    int i;
    
    for(i=0; i<n-2; i++){
        temp1 = temp1->next;
    }
    //now temp1 points to (n-1)th Node
    struct Node* temp2 = temp1->next; //nth Node (will be deleted)
    temp1->next = temp2->next; //(n+1)th Node
    free(temp2);
}

int main(){
    head = NULL;

    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);

    int n;
    printf("Enter a position \n");
    scanf("%d", &n);
    Delete(n);
    Print();
}