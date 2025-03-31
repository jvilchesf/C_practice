#include <stdio.h>

/*Write a program that asks the user for a 24-hour time, then display the time in 12-hour
form:
Enter a 24 - hour time: 21:11
Equivalent 12- hour time: 9:11 PM

Be carefull not to display 12:00 as 00:00.

*/

int main(){

    /*declare variables*/
    int hours, minutes, pm_hour;

    /*ask user*/
    printf("Enter a 24-hour time:");
    scanf("%d:%d", &hours, &minutes);

    /*transform 24 hours to PM hours*/
    if (hours > 12 && hours <= 24){
        hours = hours - 12;
    printf("0%d:0%d PM\n", hours, minutes );
    }else {
        printf("%d:%d AM", hours,minutes);
    }
    

}