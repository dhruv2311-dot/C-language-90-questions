#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	int i;
	int j;
	int length= sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<length-1;i++){
		if(arr[i]>arr[i+1]){
			printf("false");
		}
	}
	printf("true");
}