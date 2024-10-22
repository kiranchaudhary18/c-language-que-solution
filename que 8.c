#include <stdio.h>

int main(){
int arr[]={3,2,3,4};
int sum=0;
int len=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<len;i++){
    sum=sum+arr[i];
}
printf("%d",sum/len);

return 0;
}