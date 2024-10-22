#include <stdio.h>

int main() {
int arr[] = {1,2,2,3,4,4,5,5,6,6,6,6,7,8,8,9};
    int arr2[]={};
    int i,j ;
    int a=0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]!=arr[i+1]){
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}