#include<stdio.h>
#include<string.h>

int main() {
    char word[20];
    printf("Enter a word:");
    gets(word);

    int n=strlen(word);

     char check[n];
     for(int i=0; i<n; i++) {
        check[n-1-i]=word[i];
     }
     check[n]='\0' ;
     if (strcmp(word, check)==0)
     printf("palindrome\n");
    else
    printf("not palindrome");

    return 0;
}