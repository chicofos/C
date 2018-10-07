#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter size of Array \n");
    scanf("%d", &n);

    //calloc initializes with 0 and malloc initializes with garbage data
    int *A = (int*) malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        A[i] = i+1;
    }

    //if realloc first argument is NULL only creates a new block
    int *B = realloc(A, 2*n*sizeof(int));

    for(int i=0; i < 2*n; i++){
        printf("%d \n", B[i]);
    }
}