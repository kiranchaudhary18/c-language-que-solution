#include <stdio.h>

int main() {
    int arr[]={1,-2,3,-4,5,-6};
    int positive=0;
    int negative=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        if(arr[i]>0){
            positive++;
        }else if(arr[i]<0){
            negative++;
        }
        }
    
    printf("%d\n",positive);
    printf("%d\n",negative);
    
    return 0;
}