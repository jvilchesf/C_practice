#include <stdio.h>

/*Write a program taht finds the largest in a serie of numbers entered by the user. The program must prompt the user to enter numbers one by one. When the user enter 0 or negative number, the program must display the largest no-negative number entered:

Enter a number: 60
Enter a number: 38.3
Enter a number: 4,89
Enter a number: 100.62
Enter a number: 75.2295
Enter a number: 0

The largest n umber entered was 100.62

Notice that the numbers aren't necessarily integers.

*/

int main(){

    /*declare variables*/
    float input = 1, largest = 0;

    /*iteration over the enter number*/
    do{
        /*ask user*/
        printf("Enter a number:\n");
        scanf("%f", &input);

        /*compare largest*/
        if (input > largest){
            largest = input;
        }
    } while (input > 0);

    printf("The largest n umber entered was: %f\n", largest );
}
