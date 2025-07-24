#include<stdio.h>

int main () {
  struct book {
    char name[50], author[50], publisher[50];
  }b[50];
  
//   int n;
//   printf("Enter the number:");
//   scanf("%d",&n);
  getchar();

  for(int i=0; i<50; i++) {
    
  printf("Enter the name of book:");
  fgets(b[i].name, sizeof(b[i].name), stdin);
     
  printf("Enter the author of book:");
  fgets(b[i].author, sizeof(b[i].author), stdin);
   
  printf("Enter the publisher of book:");
  fgets(b[i].publisher, sizeof(b[i].publisher), stdin);

  }
  for (int i=0; i<50; i++) {
    printf("Name of publisher : %s",b[i].publisher);
  }
  return 0;
}