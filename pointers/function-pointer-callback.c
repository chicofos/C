#include<stdio.h>

// void A(){
//     printf("Hello");
// }

// int B(void (*ptr)()){
//     ptr();
// }

// int main(){
//     void (*p)() = A;
//     B(p);
//     //B(A)
// }

int compare(int a, int b){
    // if(a > b) return 1;
    // else return -1;
    return a - b;
}

int BubbleSort(int* A, int n){
    int i,j,temp;

    for(i=0; i<n; i++){
        for(j=0; j<n-1; j++)
        {
            if(compare(A[j], A[j+1]) > 0){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main(){
    int i, A[] = { 3,2,1,5,6,4 };
    BubbleSort(A, 6);
    for(i=0; i<6; i++) printf("%d", A[i]);
}