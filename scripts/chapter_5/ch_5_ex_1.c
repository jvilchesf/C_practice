#include <stdio.h>

/*Write a program that calculate how many digits a number contains:

Enter a number: 374
The number 374 has 3 digits

you may assume that the number has no more than four digits. Hint: Use if statements to test the number. For exampl, if the number is between 0 and 1, it has one digit. If the number is between 10 and 99, it has two digits.

*/

int main(){

    /*declare variables*/
    int input;

    /*ask user*/
    printf("Enter a number:");
    scanf("%d", &input);

    if (input >= 0 && input < 10){
        printf("Number has 1 digit\n");
    }
    else if (input >= 10 && input < 100){
        printf("Number has 2 digits\n");
    }else if (input >= 100 && input < 999){
        printf("Number has 3 digits\n");
    }else if (input >= 1000 && input < 10000){
        printf("Number has 4 digits\n");
    }

}