#include<stdio.h>
int main(){
	int arr[]={4,2,8,5,1};
	int i,k,j;
	int length=sizeof(arr)/sizeof(arr[0]);
	for( i=0;i<length;i++){
		for( j=i+1;j<length;j++){
			if(arr[i]>arr[j]){
			 int sum=arr[i]+arr[j];
				arr[i]=arr[j];
				arr[j]=sum-arr[i];
			}
		}
	}
	for( k=0;k<length;k++){
	    printf("%d",arr[k]);
	}
}