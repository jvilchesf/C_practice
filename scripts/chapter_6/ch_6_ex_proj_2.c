
#include <stdio.h>

/*
Write a program that asks the user to enter two integers, then calculate and display their greates common divisor (GCD):

Enter two integers: 12 28
Greates common divisor: 4

Hint: The classic algorith for computing the GCD, know as Euclid's algorithm, goes as follows: 
1. let m and n be variables containing the two numbers.
2. If n is 0, then stop: m contains the GCD. 
3. Otherwise, compute the remainder when m is divided by n. 
4. Copy n into m 
5. copy the remainder into n.
6. Then repeat the process, starting with testing wether n is 0.

*/

int main(){

    /*declare variables*/
    int m , n, original_m, original_n, gcd, remainder;

    /*ask user*/
    printf("Enter two integres:\n");
    scanf("%d %d", &m, &n);

    original_m = m;
    original_n = n;
    
    if (n > m){
        n = original_m;
        m = original_n;
    }

        
    /* Euclid's algorithm */
    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("gcd = %d", remainder);
    
}
 
