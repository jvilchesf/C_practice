#include <stdio.h>

/*
Which one of the following statements is not equivalent to the other two (assuming that the looop bodies are the same?)

a) for (i = 0; i < 10; i ++){

}

b) for (i = 0; i < 10; ++i){

}

c) for (i = 0; i++ < 10; ){

}

c is different 

*/
 
int main(){

    int i;

    for (i = 0; i < 10; i++){
        printf("%d", i);
    }

}
 
