#include <stdio.h>
#include <string.h>
int main(){
char str1[15]="\"Hello";
char str2[]="world\"!";
strcat(str1,str2);
printf("%s",str1);

    return 0;
}
