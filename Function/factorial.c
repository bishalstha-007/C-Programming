
#include <stdio.h>
int factorial(int n);
int main()
{
    int number;
    int fact;
    printf("Enter a positive number:");
    scanf("%d", &number);

    fact = factorial(number);
    printf("Factorial of %d is %ld\n", number, fact);
    return 0;
}
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
}
