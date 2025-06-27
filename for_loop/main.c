#include <stdio.h>

void tempo();

void main(){
    int j = 0;
    for(;;){
        if(j == 0){
            j = 1;
            printf("j 0\n");
            tempo();
            // for(int i; i<100000000; i++){
            //     printf("%d\n",i);
            // }
        }else{
            j = 0;
            printf("j 1\n");
            tempo();
            // for(int i; i<100000000; i++){
            //     printf("%d\n",i);
            // }
        }
    }
}

void tempo(){
    int p = 0;
    for(int i; i<10000000; i++){
        p = p + 1;
        if(p > 100){
            p = p*p;
        }
    }
}