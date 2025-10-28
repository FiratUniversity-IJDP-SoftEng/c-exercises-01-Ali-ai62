#include <stdio.h>

int main(void)
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    for (int i = 0; i < age; i++)
    {
        printf("Happy Birthday!\n");
    }

    return 0;
}
