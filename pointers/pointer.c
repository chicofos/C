#include <stdio.h>

//receives the pointer of a
void Increment(int *p)
{
    //prints the same value address
    printf("%d\n", &p);
    //increases the value of a using the pointer
    *p = (*p) + 1;
}
int main()
{
    int a = 5;
    //prints the address of a
    printf("%d\n", &a);
    Increment(&a);

    printf("%d\n", a);
}