#include <stdio.h>
#include <string.h>

int main()
{
    char secretCode[] = "nu2026";
    char code[50];

    printf("Enter code: ");
    scanf("%49s", code);

    // Full comparison
    if (strcmp(code, secretCode) == 0)
    {
        printf("Access granted\n");
    }
    else
    {
        printf("Access denied\n");
    }

    // Check whether code starts with "nu"
    if (strncmp(code, "nu", 2) == 0)
    {
        printf("Code starts with \"nu\": Yes\n");
    }
    else
    {
        printf("Code starts with \"nu\": No\n");
    }

    return 0;
}
