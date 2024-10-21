#include<stdio.h>
#include<string.h>
int main(){
    char str[100]="codinggita";
    int len=strlen(str);
    int i;
    int count=0;
    for(i=0;i<=len;i++){
       count++;
    }
     if(str[len-1]=='a'){
            printf("true");
        }else{
            printf("false");
        }
}