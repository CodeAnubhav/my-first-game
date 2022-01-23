#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numbers, guess, nguess = 0;
    srand(time(0));
    numbers = rand() % 100 + 1; // random number between 100 to 1

    // printf("the number is %d\n", numbers);

    do
    {
        printf("**** Guess the numbers between 1 to 100****\n");
        scanf("%d", &guess);
        if (guess > numbers)
        {
            printf("**Lower Number please!** \n");
        }
        else if (guess < numbers)
        {
            printf("**Higher Number Please!**\n");
        }
        else
        {
            printf("###You Guessed It Hurreee in %d  attempt You win*###",nguess);
        }
        nguess++;
    } while (guess != numbers);

    return 0;
}