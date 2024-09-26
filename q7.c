#include<stdio.h>
#include<string.h>
int main(){
	char signal="red";
	char color1="red";
	char color2="yellow";
	char color3="green";
	if(signal==color1){
		printf("stop");
	}else if(signal==color2){
		printf("slow down");
	}else{
		printf("go");
	}
}