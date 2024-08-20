#include <stdio.h>

int main() {
    float baseSalary, hraPercentage, daPercentage, taPercentage;
    float hraAmount, daAmount, taAmount, grossSalary;

    printf("Enter Base Salary: ");
    scanf("%f", &baseSalary);

    printf("Enter HRA Percentage: ");
    scanf("%f", &hraPercentage);

    printf("Enter DA Percentage: ");
    scanf("%f", &daPercentage);

    printf("Enter TA Percentage: ");
    scanf("%f", &taPercentage);

    hraAmount = (hraPercentage / 100) * baseSalary;
    daAmount = (daPercentage / 100) * baseSalary;
    taAmount = (taPercentage / 100) * baseSalary;

    grossSalary = baseSalary + hraAmount + daAmount + taAmount;

    printf("Gross Salary: Rs. %.2f\n", grossSalary);

}