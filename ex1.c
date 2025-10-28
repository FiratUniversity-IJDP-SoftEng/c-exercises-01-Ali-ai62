#include <stdio.h>
#include <string.h>

int main(void)
{
    char pet[10];  // Array to store pet type

    printf("Do you have a cat or a dog? ");
    scanf("%s", pet);  // Get string input

    if (strcmp(pet, "cat") == 0)
    {
        printf("Meow!\n");
    }
    else if (strcmp(pet, "dog") == 0)
    {
        printf("Woof!\n");
    }
    else
    {
        printf("I don't know that pet.\n");
    }

    return 0;
}
