#include <stdio.h>
#include <stdlib.h>

void printHello(){
    printf("Hello world \n");
}

int* Add(int* a, int* b){
    /* note:
    store the value on heap not in stack using malloc/calloc
    because if we return the address of c (&c) in stack this can be deallocated with other function call
    */
    int* c = (int*)malloc(sizeof(int));
    *c = (*a) + (*b);
    return c;
}

int main(){
    int a = 4, b = 2;
    int* ptr = Add(&a, &b);
    printHello();
    printf("Sum = %d", *ptr);
}