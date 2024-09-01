#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    const int MAX_ATTEMPTS = 10;

    // Initialize random number generator
    srand(time(NULL));
    number = rand() % 100 + 1;

    printf("====================================\n");
    printf("   Welcome to the Number Guessing Game!\n");
    printf("====================================\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Can you guess what it is?\n\n");

    while (attempts < MAX_ATTEMPTS) {
        printf("Attempt %d/%d\n", attempts + 1, MAX_ATTEMPTS);
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > number) {
            printf("Your guess is too high! Try again.\n\n");
        } else if (guess < number) {
            printf("Your guess is too low! Try again.\n\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts.\n", number, attempts);
            break;
        }

        if (attempts == MAX_ATTEMPTS) {
            printf("Sorry, you've reached the maximum number of attempts.\n");
            printf("The number was %d.\n", number);
        }
    }

    printf("\nGame Over\n");
    printf("====================================\n");

    return 0;
}
