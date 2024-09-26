#inlude<stdio.h>
int main(){
	int number=39;
	if(number<60){
		printf("F");
	}else if(number>=60 && number<=69){
		printf("D");
	}else if(number>=70 && number<=79){
		printf("C");
	}else if(number>=80 && number<=89){
		printf("B");
	}else if(number>=90 && number<=100){
		printf("A");
	}
}
