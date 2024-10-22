 #include<stdio.h>
 #include<string.h>
 
 int main(){
 
 int arr[5]={3,-5,9,7,1};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        if(arr[i]>=0){
            
            printf("true");
            
            
            
            
        }
        else{
            printf("false");
            break;
        }
    }

    return 0;
}