#include<stdio.h>
int main() {
    int n;
    printf("Enter the number of persons:");
    scanf("%d",&n);

    int i,age[n];
    for (i=0; i<n; i++) {
        printf("Enter the age of %d:",i+1);
        scanf("%d",&age[i]);
    }

      for (i=0; i<n; i++) {
        printf("the age of %d: %d\n", i+1, age[i]);
    }
    return 0;
}