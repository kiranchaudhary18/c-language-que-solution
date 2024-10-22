int arr[]={80,20,30,50};
int min=arr[0];
int max=arr[0];
int len=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<len;i++){
    if(min>arr[i]){
        min=arr[i];
    }
    if(max<arr[i]){
        max=arr[i];
    }
}printf("%d",max-min);