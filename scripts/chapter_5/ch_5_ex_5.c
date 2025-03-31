#include <stdio.h>

/*in one state, single residents are subject to the following income tax:

Income              Amount of tax
Not over 750        1% of income
750 - 2,250         7,50    plus 2% of amount over 750
2,250 - 3,750       37,50   plus 3% of amount over 2,250
3,750 - 5,250       82,50   plus 4% of amount over 3,750
5,250 - 7,000       142,50  plus 5% of amount over 5,250
Over 7,000          230,00  plus 6% of amount over 7,000

Write a program that asks the user to enter the amoun of taxable income, the displays the tax due.
*/

int main(){

    /*declare variables*/
    int amount, tax_due;
    
    /*ask user*/
    printf("What is your taxable income?");
    scanf("%d", &amount);

    /*compare and calculate*/
    if (amount < 750){
        /*1%*/
        tax_due = (amount * 0.01);
    } else if (amount >= 750 && amount <= 2250){
        /* 7,50 + 2% */
        tax_due = (amount * 0.02) + 7.50;
    } else if (amount > 2250 && amount <= 3750 ){
        /* 37,50 + 3% */     
        tax_due = (amount * 0.03) + 37.50;
    } else if (amount > 3750 && amount <= 5250){
        /* 82,50 + 4% */
        tax_due = (amount * 0.04) + 82.50;
    } else if (amount > 5250 && amount <= 700){
        /* 142,50 + 5% */
        tax_due = (amount * 0.05) + 142.50;
    } else if(amount > 7000) {
        /* 230,00 + 6% */
        tax_due = (amount * 0.06) + 230.00;
    }
    
    printf("Tax due: %d \n", tax_due);
}