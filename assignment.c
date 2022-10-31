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


char * getstring(char *str,char *h){
    int k=0;
    while(str[k]!=' ' && str[k]!='\0'){
        h[k]=str[k];
        printf("%c\n",h[k]);
        k++;
    }
    if(str[k]==' '||str[k='\0']){
        h[k]='\0';
    }
    return &str[k];
}

int main(int argc,char*argv[]){
    char k[100]="";
    printf("%s\n",k);
    char s[100];
    while (k!="exit"){
        fgets(k,50,stdin);
        char *token;
        char *k2=getstring(k,token);
        printf("%s\n",k2);
        if (!strcmp(token,"cd")){
            // char *token2=strtok(NULL," ");
            char token2[100];
            getstring(k2,token2);
            // char t[50];
            cd (token2);}
        else if(!strcmp(token,"pwd")){
            printf("%s\n",getcwd(NULL,100));
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