#include <stdio.h>

/*
What output does the following program fragment produce

i = 1;

while (i <= 128){
    printf("%d", i);
    i *= 2;
}

guest

0. 2 = 1 * 2 
   i = 2

1. 2 = 1 * 2 
   i = 4

2. i = 4 * 2 
    i = 8

3. i = 8 * 2
    i = 16

4. 32 
5. 64
6. 128            

*/

int main(){

    /*define variables*/
    int i = 1;

    while (i <= 128){

        printf("%d\n", i);
        i *= 2;
    }
}