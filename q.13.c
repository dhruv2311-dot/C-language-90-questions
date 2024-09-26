int arr[]={1,2,3,4,5}
int len=sizeof(arr)/sizeof(arr[0]);
int count=0;
int number=3;
int i;
for(i=0;i<len;i++){
	if(count%i==0){
		count++;
	}
}
if(arr[i]=number){
	printf("true");
}else{
	printf("false");
}
}
