#include <stdio.h>

/*
Programming project 1 in Chapter 4 asked you to write a program that displays a two-digit number with its digits reversed. Generalize the program so that the number can have one, two, three, or more digits. 

Hint: Use a do loop that repeatedly divides the number by 10 stopping when it reaches 0;
*/

int main(){
    /*declare variables*/
    int input, residual, division;

    /*ask user*/
    printf("Insert a number and I'll have returned it reversed\n");
    scanf("%d", &input);
    
    printf("Your number reversed is:\n");
    do{
        division = input / 10;
        residual = input % 10;
        printf("%d", residual);
        input = division;
    } while (division >0);
}

