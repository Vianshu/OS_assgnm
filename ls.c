#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<errno.h>
#include<stdlib.h>
#include<dirent.h>

void ls(const char *dir,int op_a,int op_1){
    struct dirent *d;
    DIR *dh=opendir(dir);
    if (!dh){
        if(errno == ENOENT){
            perror("Directory doesn't exist");
        }
        else{
            perror("Unable to read");
        }
        exit(EXIT_FAILURE);
    }
    while((d=readdir(dh))!=NULL){
        if (!op_a && d->d_name[0]=='.'){
            continue;
        }
        printf("%s ", d->d_name);
        if(op_1){
            printf("\n");
        }
    }
    if(!op_1){
        printf("\n");
    }
}
int main(int argc,char*argv[]){
    if (argc == 1){
        ls(".",0,0);
    }
    else if(argc==2){
        if (argv[1][0]=='-'){
            int op_a=0;
            int op_1=0;
            char *p = (char*)(argv[1]+1);
            while (*p){
                if(*p=='a'){
                    op_a=1;
                }else if(*p=='l'){
                    op_1=1;
                }
                else{
                    perror("Option not available");
                    exit(EXIT_FAILURE);
                }
                p++;
            }
            ls(".",op_a,op_1);
        }
    }
    return 0;
}