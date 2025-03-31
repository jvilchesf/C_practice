#include <stdio.h>

/*This is a code to resolve the exercise 10 from the chapter five (logical condition)

Using the switch statement, write a program that converts a numerical grade into a letter grad:

Example:

Enter numerical grade: 84
Letter grade: B

Use the following grading scale: A = 90 - 100, B= 80 - 89, C = 70 - 79, D = 60 -69, F = 0 - 59. 

Print an eror message if the grade is larger than 100 or less than 9. Hint: Break the grade into two dogots, then use a switch statement 
the ten digit
*/

int main(){
    
    /*declare variables*/
    int number;
    int tens;

    /*read user input*/
    printf("Enter numerical grade:");
    scanf("%d",&number);

    if (number < 0 || number > 100){
        printf("Error: Invalid number");
        return 1;
    }

    tens = number / 10;

    printf("Letter grade: ");
    switch (tens){
        case 9: printf("A\n");
            break;
        case 8: printf("B\n");
            break;
        case 7: printf("C\n");
            break;
        case 6: printf("D\n");
            break;
        default : printf("F\n");
            break;    
    }

}