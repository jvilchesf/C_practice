/**
 This is an excercise from the book in the folder book

 Exercise number 11 from chapter 5

Write a program that asks the users for a two-digit number, then prints the English word for the number.

Example:
enter a two-digit number: 45
You entered the number forty-five.
 */

#include <stdio.h>

int main(){
    /*The plan to resolve this excercise is the following:
        1. Ask the user for the two-digit number
        2. Splt the number in two parts, the tens and the units
        3. Use a case sentence the evaluate the numbers 
        4. Print the result 
    */

    /*Declare variables*/
    int number;

    /*Read the number with an scanf*/
    printf("Enter the number:");
    scanf("%d", &number);

    /*Split the number in two parts*/   
    int tens = number / 10;
    int units = number % 10;
    
    /*print the general first part of the print output*/
    printf("You entered the number:");


    /*Logical condition for exeuctrion with numbers between 11 and 19*/
    if ((tens == 1) && (units >= 1 && units <= 9)){
        switch(units){
            case 1: printf("eleven\n");
                break;
            case 2: printf("twelve\n");
                break;
            case 3: printf("thirteenth\n");
                break;
            case 4: printf("fortheen\n");
                break;
            case 5: printf("Fifteen\n");
                break;
            case 6: printf("sixteen\n");
                break;
            case 7: printf("seventeen\n");
                break;
            case 8: printf("eighteen\n");
                break;
            case 9: printf("nineteen\n");
                break;
        }
    }
    else{
         /*Use the case sentence to evaluate the tens part of the number*/
        switch(tens){
            case 1: printf("ten");
                break;
            case 2: printf("twenty-");
                break;
            case 3: printf("thirty-");
                break;
            case 4: printf("forty-");
                break;
            case 5: printf("fifty-");
                break;
            case 6: printf("sixty-");
                break;
            case 7: printf("seventy-");
                break;
            case 8: printf("eighty-");
                break;
            case 9: printf("ninety-");
                break;
        }
        /*Switch sentence to evaluate unit part of the number*/
        switch(units){
            case 1: printf("one\n");
                break;
            case 2: printf("two\n");
                break;
            case 3: printf("three\n");
                break;
            case 4: printf("four\n");
                break;
            case 5: printf("five\n");
                break;
            case 6: printf("six\n");
                break;
            case 7: printf("seven\n");
                break;
            case 8: printf("eight\n");
                break;
            case 9: printf("nine\n");
                break;
            case 0: printf("cero\n");
                break;
        }
    }
    return 0;
}