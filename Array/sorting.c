#include<stdio.h>
int main () {
    int a[10];
    printf("Enter the elements of an array \n");
    for(int i=0; i<10 ; i++)
     {
         scanf("%d",&a[i]);
     }
     int temp;
     for(int i=0;i<10; i++) {
        for (int j=0; j<10-i; j++) {
            if(a[j]>a[j+1]) {
                temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
     }
     for(int i=0 ;i<10; i++) {
        printf("%d\n",a[i]);
     }
     return 0;
}