#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[32];
    int age;
} User;

User* createUser(char *name, int age) {
    User *user = malloc(sizeof(User));

    strncpy(user->name, name, sizeof(user->name) - 1);
    user->name[sizeof(user->name) - 1] = '\0';
    user->age = age;

    return user;
}

int main() {
User *user = NULL;
user = createUser("VeryVeryVeryVeryVeryVeryLongUserName", 25);
if (user != NULL) {
    printf("User: %s\n", user->name);
    free(user);
}

    printf("User: %s\n", user->name);
    free(user);
    // MAJOR: memory leak, user is never freed

    return 0;
}
