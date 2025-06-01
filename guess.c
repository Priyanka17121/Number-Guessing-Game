#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 5;

    // Seed random number generator
    srand(time(0));
    number = rand() % 100 + 1;  // Random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("You have %d attempts to guess it.\n\n", attempts);

    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d: Enter your guess: ", i);
        scanf("%d", &guess);

        if (guess == number) {
            printf("Congratulations! You guessed the correct number %d in %d attempts.\n", number, i);
            return 0; // Exit program
        } else if (guess < number) {
            printf("Too low!\n\n");
        } else {
            printf("Too high!\n\n");
        }
    }

    // If the user fails all attempts
    printf("Sorry, you've used all your attempts. The correct number was %d.\n", number);

    return 0;
}