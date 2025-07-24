#include <stdio.h>
int main()
{
    FILE *file;
    fprintf(file ,"This is my reading file");
    if (file = fopen("hello.txt", "r"))
    {
        printf("File opened successfully in read mode");
    }
    else
        printf("The file is not present! cannot create a new file using r mode");
    fclose(file);
    return 0;
}