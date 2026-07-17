// Program to create quiz application
#include <stdio.h>

int main() {
    int score = 0, answer;

    printf("===== Welcome to the Quiz =====\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    // Question 2
    printf("\n2. Which language is taught in 1st year?\n");
    printf("1. Python\n2. Java\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Question 3
    printf("\n3. How many days are there in a leap year?\n");
    printf("1. 365\n2. 366\n3. 364\n4. 360\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    // Question 4
    printf("\n4. Which symbol is used to end a C statement?\n");
    printf("1. :\n2. ;\n3. .\n4. ,\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    // Question 5
    printf("\n5. Which function is the entry point of a C program?\n");
    printf("1. start()\n2. run()\n3. main()\n4. init()\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Display Result
    printf("\n===== Quiz Result =====\n");
    printf("Your Score: %d/5\n", score);

    if (score == 5)
        printf("Excellent! You got all answers correct.\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}