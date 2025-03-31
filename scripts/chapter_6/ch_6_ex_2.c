#include <stdio.h>

/*
what output does the following program fragment produce?

i = 9384;
do{
    printf("%d ",i);
    i /= 10;
} while (i > 0);

gues:

1. 9384 and i = 938
2. 938 and i = 93
3. 93 and i = 9
4. 9 and i = 0

*/

int main(){
    
    /*declare variables*/
    int i = 9384;
    
    /*implement iteration*/
    do{
        printf("%d ",i);
        i /= 10;
    } while (i > 0);

}
