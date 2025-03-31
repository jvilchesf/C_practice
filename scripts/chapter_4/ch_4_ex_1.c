#include <stdio.h>

/*Write a program that asks the user to enter a two-digit number, the prints the number with its digits reversed.

A session with the program should have the following appearance:


Enter a two-digit number: 28
The reversal is: 82
*/

int main(){
    
    /*declare variables*/
    int input, decimal, units;

    /*ask user*/
    printf("Enter a two-digit number:\n");
    scanf("%d", &input);

    /*evalute number*/
    decimal = input / 10;
    units = input % 10;

    printf("The reversal is : %d%d\n", units, decimal);

}