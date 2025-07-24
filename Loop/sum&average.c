#include<stdio.h>
int main () {
    int n;
    printf("ENter the nmber");
    scanf("%d",&n);
    int sum=0;
    int a=n;

    while (n!=0)
    {
        sum+=n;
        n--;

    }
    printf("sum is %d", sum);
    float avg;
    avg=(float)sum/a;
    printf(" Average :%.2f",avg);
    return 0;
}