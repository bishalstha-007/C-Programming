#include<stdio.h>
int main() {
    int *ptr;
    int age=17;
    ptr=&age;
    printf("%p\n",ptr);
    printf("%d\n", *ptr);
    printf("%p\n", &age);
    return 0;
}