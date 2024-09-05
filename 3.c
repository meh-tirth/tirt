#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    lastDigit = num % 10;

    
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;  
    }

    
    int sum = firstDigit + lastDigit;

    
    printf("The sum of the first and last digits is: %d\n", sum);

    
}
