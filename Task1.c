#include <stdio.h>
int main()
{
    int age = 20;
    int *p = &age;
    printf("Age Before Change is %d\n", age);
    *p = 21;
    printf("Age After Change is %d", *(p));
    return 0;
}
