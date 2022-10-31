#include<stdio.h>
#include<string.h>

void getstring(char *str,char h[100][100],int *size){
    int k=0;
    int i=0,j=0;
    // printf("hello\n");
    // printf("%c %d %d\n",&str[k],&k,&i);
    // printf("%s\n",str);
    while(str[k]!='\0'){
        while(str[k]!=' '){
            h[i][j]=str[k];
            k++;
            j++;
            printf("%c\n",str[k]);
        }
        h[i][j]='\0';
        i++;
    }
    *size=i;
    printf("hello");
}

int main(){
    // char *k;
    // fgets(k,100,stdin);
    char *k="Hello world kokk";
    char h[100][100];
    int *size=0;
    getstring(k,h,size);
    int p=0;
    printf("hel;o");
    if(*size==0){
        printf("yes");
    }
    else{printf("no");}
    while(p<=*size){
        printf("%s\n",h[p]);
    }

}