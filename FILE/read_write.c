#include<stdio.h>
int main () {
    FILE *ptr;
    char str[200];

    ptr=fopen ("hello.txt","r");
    if(ptr==NULL){
        printf("Error:Unable to open hello.txt\n");
        return 1;
    }

    if(fgets(str, sizeof(str), ptr)==NULL) {
        printf("Error: hello.txt is empty or reading fail\n");
        fclose(ptr);
        return 1;
    }
    fclose(ptr);
    ptr=fopen ("bishal_answer.txt", "w");
    if(ptr==NULL) {
        printf("Error:Unable to open bishal_answer.txt for writing\n");
        return 1;

    }
     fprintf(ptr,"%s", str);
     fclose(ptr);
     printf ("File is succesfully written \n");
     return 0;
}