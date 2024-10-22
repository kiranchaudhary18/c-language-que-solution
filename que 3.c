#include <stdio.h>

int main() {
int a=40;
int b=40;
int c=100;
if(a==b==c){
    printf("triangle is equilateral");
}else if(a==b || b==c || a==c){
    printf("isosceles");
}else{
    printf("scalene");
}
return 0;
}


# include<stdio.h>
int main(){
int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c && a==c){
        printf("equilateral");
    }else if(a==b || b==c || a==c){
        printf("isosceles");
    }else{
        printf("saclene");
    }
return 0;
}