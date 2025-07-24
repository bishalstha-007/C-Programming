
#include <stdio.h> // taking input usiing fgets .
int main()
{
    char name[100];
    printf("Enter your name:");
    fgets(name, sizeof(name), stdin);
    printf(" name : %s", name);
    return 0;
}
