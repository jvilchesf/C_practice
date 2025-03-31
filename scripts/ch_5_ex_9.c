#include <stdio.h>

/*Write a program that prompts the user to enter two dates and then indicates which date comes earlier on the calendar

Example:

Enter first date (mm/dd/yy): 3/6/08
Enter second date (mm/dd/yy): 2/27/07
5/17/07 is earlier than 3/6/08

*/

int main(){

    /*declare variables*/
    int y1, y2, m1, m2, d1, d2;

    /*read two dates*/
    printf("Enter first date (dd/mm/yy):");
    scanf("%d/%d/%d", &d1, &m1, &y1);

    printf("Enter second date (dd/mm/yy):");
    scanf("%d/%d/%d", &d2, &m2, &y2);

    /*compare year*/
    if(y1 > y2){
        printf("%d/%d/%d is earlier than %d/%d/%d \n", d2,m2,y2,d1,m1,y1);
        return 1;
    }else if (m1 > m2){
        printf("%d/%d/%d is earlier than %d/%d/%d \n", d2,m2,y2,d1,m1,y1);
        return 1;
    }else if (d1 > d2){
        printf("%d/%d/%d is earlier than %d/%d/%d \n", d2,m2,y2,d1,m1,y1);
        return 1;
    }else if (d1 == d2 && m1 == m2 && y1 ==y2){ /*equal date case*/
        printf("Dates are equal\n");    
        return 1;
    }else{
         printf("%d/%d/%d is earlier than %d/%d/%d \n", d1,m1,y1,d2,m2,y2);
        return 1;
    }
}