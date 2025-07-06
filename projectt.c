#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int num_of_guesses = 0;
    int guessed;

    // Print the random number
    // printf("Random number between 1 and 100: %d\n", random_number);
    do
    {
        printf("Guess the number");
        scanf("%d", &guessed);
        if (guessed > random_number)
        {
            printf("Enter lower number please\n");
        }
        else if (guessed < random_number)
        {
            printf("Enter higher number please\n");
        }
        num_of_guesses++;
    } while (guessed != random_number);
    printf("You guessed the number in %d guesses", num_of_guesses);
    return 0;
}
