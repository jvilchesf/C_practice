#include <stdio.h>

/*
Write a program that finds the largest and smallest of four integeres entered by the user:

Enter four integers: 21 43 10 35
Largest: 43
Smallest: 10

Use a few if statements as possible. Hint: Four if statements are sufficient
*/

int main(){

    /*define variables*/
    int value_1, value_2, value_3, value_4, largest, smallest;

    /*Ask user for input values*/
    printf("Enter four integers:");
    scanf("%d %d %d %d", &value_1, &value_2, &value_3, &value_4);

    /*compare values*/

    /*compare first two values*/
    largest = (value_1 > value_2) ? value_1 : value_2;
    smallest = (value_1 > value_2) ? value_2 : value_1;

    /*compare 3th value*/
    largest = (value_3 > largest) ? value_3 : largest;
    smallest = (value_3 < smallest) ? value_3 : smallest;

    /*compare 4th value*/
    largest = (value_4 > largest) ? value_4 : largest;
    smallest = (value_4 < smallest) ? value_4 : smallest;

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

}    