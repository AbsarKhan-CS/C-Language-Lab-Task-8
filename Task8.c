#include <stdio.h>
#include <string.h>

int main()
{
    char subjects[5][50];
    int i;
    int longest = 0;

    
    for (i = 0; i < 5; i++)
    {
        printf("Enter subject %d: ", i + 1);

        fgets(subjects[i], sizeof(subjects[i]), stdin);

        
        subjects[i][strcspn(subjects[i], "\n")] = '\0';
    }

    
    printf("\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d. %s\n", i + 1, subjects[i]);
    }

    
    for (i = 1; i < 5; i++)
    {
        if (strlen(subjects[i]) > strlen(subjects[longest]))
        {
            longest = i;
        }
    }

    printf("Longest subject: %s\n", subjects[longest]);

    return 0;
}