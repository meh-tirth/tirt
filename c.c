#include <stdio.h>

int main() {
    float angle1, angle2, thirdAngle;

    printf("Enter the first angle : ");
    scanf("%f", &angle1);
    printf("Enter the second angle : ");
    scanf("%f", &angle2);

    
    thirdAngle = 180 - (angle1 + angle2);

    if (thirdAngle <= 0) {
        printf("The sum of the given angles 180 degrees.\n");
    }

    printf("The third angle : %.2f degrees\n", thirdAngle);

}