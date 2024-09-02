#include <stdio.h>

int main() {
    int score;
    char grade;
    
    printf("Enter your score: ");
    scanf("%d", &score);

    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' : 'F';

    printf("Your grade is %c. ", grade);

    switch (grade) {
        case 'A':
            printf("Very Well Done! ");
            break;
        case 'B':
            printf("Good Score. ");
            break;
        case 'C':
            printf("Average performance. ");
            break;
        case 'D':
            printf("You passed, But Needs Improvement. ");
            break;
        case 'F':
            printf("Sorry, Better Luck Next Time. ");
            break;
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
        printf("Congratulations! You are eligible for the next level.\n");
    } else if (grade == 'F') {
        printf("Please try again next time.\n");
    }

}