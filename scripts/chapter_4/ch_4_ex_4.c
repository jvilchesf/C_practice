#include <stdio.h>

/*
Write a program that reads an integer entered by the user and display it in octal (base 8):

Enter a number between 0 and 32767: 1953
in octal, your number is : 03641

The output should be displayed using five digits, even if fewer digits are sufficient. 

Hint: To convert the number in octal, first divide it by 8: the remainder is the last digit of the octal number (1, in this case). 
Then divide the original number by 8 and repeat the process to arrive at the next-tl-last-digit, (printf is capable of displaying numbers in base 8, as we'll see un Chapter 7, sol there's actually an easier way to write this program.)
*/

int main(){

    /*declare variables*/
    int input, divider;

    int r1, r2, r3, r4, r5;

    /*ask user*/
    printf("Enter a number between 0 and 32767:\n");
    scanf("%d", &input);

    /*reminder 1*/
    r1 = input % 8;
    divider = input / 8;
    /*reminder 2*/
    r2 = divider % 8;
    divider = divider / 8;
    /*reminder 3*/
    r3 = divider % 8;
    divider = divider / 8;
    /*reminder 4*/
    r4 = divider % 8;
    divider = divider / 8;
    /*reminder 5*/
    r5 = divider % 8;
    divider = divider / 8;

    /*print values of divider and reminder to see what is going on*/
    printf("In octal, your number is: ");
    printf("%d%d%d%d%d\n", r5, r4 , r3 , r2 , r1);

}