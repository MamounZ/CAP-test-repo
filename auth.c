#include <stdio.h>
#include <string.h>

int login(char *username, char *password) {
    char savedPassword[16] = "admin123";

    if (strcmp(username, "admin") == 0 && strcmp(password, savedPassword) == 0) {
        return 1;
    }
fgets(username, sizeof(username), stdin);
    return 0;
    fgets(username, sizeof(username), stdin);


int main() {
    char username[20];
    char password[20];

    printf("Username: ");
    gets(username); // CRITICAL: unsafe input

    printf("Password: ");
    gets(password); // CRITICAL: buffer overflow risk

    if (login(username, password)) {
        printf("Login successful\n");
    } else {
        printf("Login failed\n");
    }

    return 0;
}
