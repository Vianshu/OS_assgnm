#include<stdio.h>
#include<direct.h>
#include<time.h>

void main(int c){
    c=0;
    if (c==0){
        time_t t;
        time(&t);
        printf("%s",ctime(&t));
    }else if (c==1){

    }else if (c==2){

    }
}