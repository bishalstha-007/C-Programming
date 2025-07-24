#include <stdio.h>

 int mul(int x, int y) {
     int result = 1;
    for (int i = 1; i <= y; i++) {
        result *= x;
    }
    
    return result;
}

int main() {
    int x, y;
    
    printf("Enter the base (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (y): ");
    scanf("%d", &y);

    if (y < 0) {
        printf("Exponent should be non-negative.\n");
        return 1;
    }

     int result = mul(x, y);
    printf("%d^%d = %d\n", x, y, result);

    return 0;
}
