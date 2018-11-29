#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* newNode(int data){
    
    //Allocate memory for new node
    struct node* node = (struct node*)malloc(sizeof(struct node));

    //Assign data to this node
    node->data = data;

    //initialize left and right children as NULL
    node->left = NULL;
    node->right = NULL;

    return(node);
}


struct node* search_tree(struct node* n, int x){
    
    if( n == NULL) return NULL;

    if(n->data == x) return n;

    if(x < n->data)
        return(search_tree(n->left, x));
    else
        return(search_tree(n->right, x));
};

struct node* find_minimum(struct node* n){
    
    struct node* min;

    if(n == NULL) return NULL;

    min = n;

    while(min->left != NULL){
        min = min->left;
    }

    return(min);
}

struct node* find_maximum(struct node* n){

    struct node* max;

    if(n == NULL) return NULL;

    max = n;

    while(max->right != NULL)
        max = max->right;
    
    return(max);
}

int main() 
{
    //create root
    struct node *root = newNode(8);

    root->left = newNode(5);
    root->right = newNode(12);

    root->left->left = newNode(3);
    root->left->right = newNode(6);

    root->right->left = newNode(11);
    root->right->right = newNode(15);

    struct node* result = search_tree(root, 11);
    
    if(result == NULL)
        printf("Not found \n");
    else
        printf("Search: %d \n", result->data);

    //Find Minimum  
    struct node* min = find_minimum(root);
    
    if(min == NULL)
        printf("Not found \n");
    else
        printf("Minimum: %d \n", min->data);
    
    //Find Maximum 
    struct node* max = find_maximum(root);
    
    if(max == NULL)
        printf("Not found \n");
    else
        printf("Minimum: %d \n", max->data);
}