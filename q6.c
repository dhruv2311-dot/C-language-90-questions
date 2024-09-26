#include <stdio.h>
#include <string.h>

// Predefined username and password
const char* predefinedUsername = "admin";
const char* predefinedPassword = "1234";

// Function to check login credentials
void checkLogin(const char* username, const char* password) {
    if (strcmp(username, predefinedUsername) == 0 && strcmp(password, predefinedPassword) == 0) {
        printf("Login successful\n");
    } else {
        printf("Login failed\n");
    }
}

int main() {
    char username[50];
    char password[50];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    checkLogin(username, password);

    return 0;
}
