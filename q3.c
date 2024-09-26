#include<stdio.h>
int main(){
	int x=3;
	int y=3;
	int z=3;
	if(x==y && y==z){
		printf("equilateral");
	}else if(x==y || y==z || x==z){
		printf("isosceles");
	}else{
		printf("scalene");
	}
}