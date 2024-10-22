  #include <stdio.h>
  int main(){
     int arr[]={1,2,3,4,5};
    int i;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]))-1;i++)
    printf("%d,",arr[i]);
    
   

    return 0;
}