#include <stdio.h>

int main() {
int arr[] = {1,2,3,4,5,6,7,8,9,10} ;
int sum ;
int avg ;
int len = sizeof(arr)/sizeof(arr[0]) ;
int i = 0;

for(i=0; i<len; i++){
sum = sum + arr[i] ;

}
avg = sum / len ;
printf("%d",avg);

    return 0;
}