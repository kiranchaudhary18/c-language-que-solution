#include <stdio.h>
#include <string.h>

void trafficlight(const char *a){
    if(strcmp(a,"red")==0){
        printf("stop");
    }else if(strcmp(a,"yellow")==0){
        printf("slow down");
    }else {
        printf("go");
    }
}





int main() {
    trafficlight("yellow");
   

    return 0;
}