#include<stdio.h>
#include<stdlib.h>
// #include <algorithm>
#include<sys/stat.h>
#include<sys/types.h>

int main(int argc, char **argv,char opt){
    // if (opt==)
    if (mkdir(argv[1])==-1){
        printf("Error");
    } else{
        printf("Directory created");
    }
}