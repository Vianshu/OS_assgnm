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

int main(int argc,char*argv[]){
    char k[100]="";
    // printf("%s\n",k);
    
    while (1){
        fgets(k,100,stdin);
        int i=0;
        int x=0,y=0;
        char h[100][100];
        int end=0;
        while(k[i]!='\0' && end==0){
            y=0;
            // printf("----------------->%c\n",k[i]);
            while(k[i]!=' ' && end ==0){
                if(k[i]=='\0'){
                    end=1;
                }else{
                    h[x][y]=k[i];
                    // printf("%d %d %c\n",x,y,h[x][y]);
                    y++;
                    i++;}
            }
            // printf("%d %d\n",x,y);
            h[x][y]='\0';
            x++;
            i++;
        }
        h[x][0]='\0';
        if (!strcmp(h[0],"cd")){
            printf("%s\n",h[1]);
            int h1=0;
            while(h[1][h1]!='\0'){
                h1++;
            }
            printf("%d %d",h1+1,sizeof(".."));
            cd(h[1]);
        }
        else if(!strcmp(h[0],"pwd")){
            printf("%s\n",getcwd(NULL,100));
        }    
        else if(!strcmp(h[0],"echo")){
            int tempindex=1;
            while(h[tempindex++][0]!='\0'){
                printf("%s ",h[tempindex++][0]);
            }
        }
        else if(!strcmp(h[0],"ls")){

        }
        else if(!strcmp(h[0],"cat")){

        }
        else if(!strcmp(h[0],"date")){

        }        
        else if(!strcmp(h[0],"rm")){
            }
        else if(!strcmp(h[0],"mkdir")){
            }
        else if(!strcmp(h[0],"exit")){
            printf("exit");
            break;
            }}
    return 0;
}