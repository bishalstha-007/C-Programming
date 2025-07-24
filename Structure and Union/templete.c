#include <stdio.h>
#include<string.h>

int main()
{
    int i;
    struct student
    {
        int sid, m, sc, c;
        char name[100];
    } s[20];
    int n;
    printf("Enter the numbers:");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++)
    {
        printf("Enter the records of students %d\n", i + 1);
        printf("Enter ID:");
        scanf("%d", &s[i].sid);
        printf("Enter the marks of math:");
        scanf("%d", &s[i].m);
        printf("Enter the marks of science:");
        scanf("%d", &s[i].sc);
        printf("Enter the marks of computer:");
        scanf("%d", &s[i].c);
        getchar();
        printf("Enter the name:");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';
    }
    printf("Records of students are :\n");
    printf("SID\t\tName\t\tMath\t\tScience\t\tComputer\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t\t%d\t\t%d\t\t%d\n", s[i].sid, s[i].name, s[i].m, s[i].sc, s[i].c);
    }
}