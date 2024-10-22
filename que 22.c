#include <stdio.h>

int main() {
char string[]="Hello, World!";
int len=sizeof(string)/sizeof(string[0]);
printf("%d",len);

    return 0;
}