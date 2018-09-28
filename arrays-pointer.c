void print(char *C)
{
    //array always stores an extra value at the end \0
    while (*C != '\0')
    {
        printf("%c", *C);
        //get the next position in memory
        C++;
    }
    printf("\n");
}

int main()
{
    char C[] = "HELLO";
    print(C);
}