#include<stdio.h>
int main () {
    struct report {  // p=phone,b= batch, f=faculty
        int id, p, b;
        char name[100], f;  
    } rep[200];
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    for(i=0; i<n ; i++) 
    {
    printf("Enter the records:\n");
    printf("Enter id:");
    scanf("%d",&rep[i].id);
    printf("Enter number:");
    scanf("%d",&rep[i].p);
    printf("Enter batch:");
    scanf("%d",&rep[i].b);
    printf("Enter name:");
    scanf("%s",&rep[i].name);
    printf("Enter faculty:");
    scanf("%s",&rep[i].f);
    }

     printf("ID\t\tnumber\t\tbatch\t\tname\t\tfaculty\n");
     
    for(i=0; i<n; i++)
    {
       
    }
}