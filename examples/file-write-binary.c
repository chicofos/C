#include <stdio.h>
#include <stdlib.h>

struct threeNum{
    int n1, n2, n3;
};

int main()
{
    int n;
    struct threeNum num;
    FILE *fptr;
    if((fptr = fopen("file.bin", "wb")) == NULL){
        printf("Error, openning bin file");
        exit(1);
    }
    for(n = 1; n < 5; ++n){
        num.n1 = n;
        num.n2 = n*n;
        num.n3 = n*n*n;
        fwrite(&num, sizeof(struct threeNum), 1, fptr);
    }
    fclose(fptr);
    return(0);
}