#include<stdio.h>
#include<string.h>
#include<strings.h>
#include<unistd.h>
// #include<sys/wa

void cd(char *dir){    
    char h[100];
    getcwd(h,100);
    if(h==NULL){
        printf("Error\n");
    }
    printf("%s\n",h);
    chdir(dir);
    getcwd(h,100);
    if(h==NULL){
        printf("Error\n");
    }
    printf("%s\n",h);
}

void pwd(){
    char *h;
    getcwd(h,100);
    printf("%s\n",h);
}

int main(int argc,char*argv[]){
    
    char k[50]="";
    printf("%s\n",k);
    char s[100];
    while (k!="exit"){
        fgets(k,50,stdin);
        char *token = strtok(k, " ");
        printf("%s\n",token);
        if (!strcmp(token,"cd")){
            char *token2=strtok(NULL," ");
            char t[50];
            cd (token2);
            }
        else if(!strcmp(token,"pwd")){
            printf("Hello");
            pwd();
        }    
        else if(!strcmp(token,"echo")){
            printf("%s\n",strtok(NULL,"\0"));
        }
        else if(!strcmp(token,"ls")){
            
        }
        else if(!strcmp(token,"cat")){

        }
        else if(!strcmp(token,"date")){

        }
        else if(!strcmp(token,"rm")){

        }
        else if(!strcmp(token,"mkdir")){

        }
        }
    return 0;
}