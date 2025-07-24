#include <stdio.h>
#include <string.h> 
struct student
{
    int id, m, sc, c;
    char name[60];
};

int main()
{
    int i, n;
    struct student s[40];

    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar(); // Clear newline after scanf

    printf("\nEnter records of students:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nEnter ID: ");
        scanf("%d", &s[i].id);

        printf("Enter marks of Math: ");
        scanf("%d", &s[i].m);

        printf("Enter marks of Science: ");
        scanf("%d", &s[i].sc);

        printf("Enter marks of Computer: ");
        scanf("%d", &s[i].c);
        getchar(); // Clear newline before fgets

        printf("Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        // Remove trailing newline from name
        s[i].name[strcspn(s[i].name, "\n")] = '\0';
    }

    printf("\nRecords of students:\n");
    printf("SID\t\tName\t\tMath\tScience\tComputer\tStatus\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t\t%d\t%d\t%d\t\t%s\n",
               s[i].id, s[i].name, s[i].m, s[i].sc, s[i].c,
               (s[i].m >= 32 && s[i].sc >= 32 && s[i].c >= 32) ? "Pass" : "Fail");
    }

    return 0;
}
