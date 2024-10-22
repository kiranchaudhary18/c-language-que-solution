#include <stdio.h>
#include <string.h>

void checkLogin(const char *username, const char *password) {
    const char *correctUsername = "admin";
    const char *correctPassword = "1234";


    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Login successful\n");
    } else {
        printf("Login failed\n");
    }
}

int main() {
    
    checkLogin("admin", "1234"); 
    checkLogin("user", "password"); 

    return 0;
}