#include<stdio.h>
int main () {
    struct course {
        char name[20];
        int code;
        float cr;
    }c[100];
    
    int i;

    for(i=0; i<3; i++) {
        
         printf("Enter course code:");
    scanf("%d", &c[i].code);

    printf("Enter credit hour of course:");
    scanf("%f", &c[i].cr);

        getchar();

    printf("Enter the name of course:");
    fgets(c[i].name, sizeof(c[i].name),stdin);


    }

    printf("name\tcode\tcredit hour\n");
    
     for(i=0; i<3; i++) {
        if(c[i].cr>3)
        {
            printf("%s\t%d\t%.2f\n", c[i].name,c[i].code, c[i].cr);  
        }
     }
     return 0;
}