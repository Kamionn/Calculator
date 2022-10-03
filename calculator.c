//
// Created by Kamion on 03/10/2022.
//

#include <stdio.h>

int main()
{
    float A, B;
    float Additional, Subtraction, Multiplication, Division;
    printf("Welcome to Calculator \n");
    printf("Choose value A : ");
    scanf("&f", &A);
    printf("Choose value B : ");
    scanf("&f", &B);

    /* Account */
    Additional = A + B;
    Subtraction = A - B;
    Multiplication = A * B;
    Division = A / B;

    /* Result */
    printf("A + B = %.2f \n", Additional);
    printf("A - B = %.2f \n", Subtraction);
    printf("A * B = %.2f \n", Multiplication);
    printf("A / B = %.2f \n", Division);
    return 0;
}
