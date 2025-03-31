#include <stdio.h>

/*Here's a simplified version of the Beaufort scale, which is used to estimate wind force:

Speed (knots)           Description
Less than 1             Calm
1 - 3                   Light air
4 - 27                  Breeze
28 - 47                 Gale
48 - 63                 Storm
Above 63                Hurricane

Write a program that asks the user to enter a wind speed (in knots), the display the corresponding description.
*/

int main(){

    /*declare variables*/
    int input;

    /*ask user*/
    printf("Enter a wind speed (in knots)");
    scanf("%d", &input);

    /*evaluate and print*/
    if (input < 1){
        printf("Calm\n");
    }else if (input >=1 && input <=3){
        printf("Light air\n");
    }else if (input >= 4 && input <=27){
        printf("Breeze\n");
    }else if (input >= 28 && input <=47){
        printf("Gale\n");
    }else if (input >= 48 && input <=63){
        printf("Storm\n");
    }else if (input > 63){
        printf("Hrrucane\n");
    }

}

