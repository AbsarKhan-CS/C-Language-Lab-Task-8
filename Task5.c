#include <stdio.h>

int divide(int a, int b, int *result)
{
    if (result == NULL || b == 0)
    {
        return -1;
    }

    *result = a / b;

    return 0;
}

int main()
{
    int result;
    int status;

    // Case 1: Successful division
    status = divide(10, 2, &result);

    if (status == 0)
    {
        printf("Division result = %d\n", result);
    }
    else
    {
        printf("Error in division\n");
    }

    // Case 2: Division by zero
    status = divide(10, 0, &result);

    if (status == -1)
    {
        printf("Error: Division by zero\n");
    }

    // Case 3: NULL pointer
    status = divide(10, 2, NULL);

    if (status == -1)
    {
        printf("Error: NULL pointer\n");
    }

    return 0;
}
