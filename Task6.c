#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[50];
    char rollNumber[30];
    char username[100];

    printf("Enter first name: ");
    fgets(firstName, sizeof(firstName), stdin);

    firstName[strcspn(firstName, "\n")] = '\0';

    printf("Enter roll number: ");
    fgets(rollNumber, sizeof(rollNumber), stdin);

    rollNumber[strcspn(rollNumber, "\n")] = '\0';

    strcpy(username, firstName);

    strcat(username, "_");

    strcat(username, rollNumber);

    printf("Username: %s\n", username);

    printf("Length: %lu\n", (unsigned long)strlen(username));

    return 0;
}
