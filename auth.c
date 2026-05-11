#include <stdio.h>
#include <string.h>

int login(char *username, char *password) {
    const char *savedPassword = getenv("ADMIN_PASSWORD");

    if (strcmp(username, "admin") == 0 && strcmp(password, savedPassword) == 0) {
        return 1;
    }
    return 0;
}

int main() {
    char username[20];
    char password[20];

    printf("Username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = 0;

    printf("Password: ");
    fgets(password, sizeof(password), stdin);

    if (login(username, password)) {
        printf("Login successful\n");
    } else {
        printf("Login failed\n");
    }

    return 0;
}
