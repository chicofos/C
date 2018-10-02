#include<stdio.h>

int Add(int a, int b){
    return a + b;
}

int main(){

    int c;
    int (*p)(int, int);
    p = &Add;   //assign address function to pointer
    c = (*p)(2, 3); //de-referencing and executing function, we can use p(2,3) also
    printf("%d", c);
}