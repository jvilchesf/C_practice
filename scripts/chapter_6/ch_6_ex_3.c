#include <stdio.h>

/*
What output does the following for statement produce? 


for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
    print("%d ", i);

gues:

Iterations conditions:
    1. i = 5 and j = 4
    2. while i > 0 and j > 0
    3. reduce i by 1, reduce j by i - 1
        
1. 5 -> i = 4 and j = 3 (4 - 1)
2. 4 -> i = 3 and j = 2 (3 - 1)
3. 3 -> i = 2 and j = 1 (2 - 1)
4. 2 -> i = i and j = 0 (1 - 1)

*/


int main(){

    /*declare variables*/
    int i,j;

    /*execute iteration*/
    for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1){
        printf("%d ", i);
    }    
}

