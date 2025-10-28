
#include <stdio.h>

int main(void)
{
    int guess;
    int secret = 3;

    printf("Guess a number between 1 and 5: ");
    scanf("%d", &guess);

    if (guess == secret)
    {
        printf("You got it right!\n");
    }
    else
    {
        printf("Wrong! The correct number was %d.\n", secret);
    }

    return 0;
}
