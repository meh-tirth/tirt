#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (1.8 * celsius) + 32;
}

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsiusToFahrenheit(celsius);

    printf("%.2f°C is equal to %.2f°F\n", celsius, fahrenheit);

}