#include<stdio.h>
int main () {
    FILE * f;
    int i,id;
    char name[20] , post[30];
    f=fopen("emp.txt" , "w");

    printf("Enter the details :\n");
    for(i=1; i<=2 ; i++) {
        printf("Employee %d: \n", i);
        printf("ID:");
        scanf("%d",&id);
        printf("Name: ");
        scanf("%s", name);
        printf("Post: ");
        scanf("%s", post);

        fprintf(f, "%d%s%s\n", id, name , post);
    }
    fclose(f);
    printf("Employee details saved in emp.txt successfully:\n");

}