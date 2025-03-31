#include <stdio.h>

/*
Write a program that asks the user to enter a faction, the reduces the fraction to lowest term

Example:
Enter a fraction: 6/12
In lowest terms: 1/2

Hint: To reduce a fraction to lowest term, first compute the GCD of the numerator and denominator. Then divide both the numerator and denomitator by the GCD
*/

int main(){

    /*declare variables*/
    int numerator, denominator, original_num, original_deno, n, residual;

    /*ask user*/
    printf("Enter a fraction:\n");
    scanf("%d/%d", &numerator, &denominator);

    /*save original values*/
    original_num = numerator;
    original_deno = denominator;

    /*put them in order for the division (%)*/
    if (numerator > denominator){
        numerator = original_deno;
        denominator = original_num;
    }

    /*euclides formula*/
    while(residual != 0){
        residual = numerator % denominator;
        if (residual <= 0){
            break;
        }
        numerator = residual;
        denominator = numerator; /* gcd */
    }

    /* calculate lowest term */
    original_deno = original_deno / numerator;
    original_num = original_num / numerator;

    printf("In lowest terms: %d/%d\n", original_num, original_deno);

}

