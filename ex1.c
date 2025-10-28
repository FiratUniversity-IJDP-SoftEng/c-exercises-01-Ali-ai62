


#include <stdio.h>

// Function declaration
void sayHello(char name[]);

int main(void)
{
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);

    sayHello(name);

    return 0;
}

// Function definition
void sayHello(char name[])
{
    printf("Hello, %s!\n", name);
}
