#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(100>=a && 90<=a){
        printf("a");
    }else if(89>=a && 80<=a){
        printf("b");
    }else if(79>=a && 70<=a){
        printf("c");
    }else if(69>=a && 60<=a){
        printf("d");
    }else{
        printf("e");
    }
    return 0;
}