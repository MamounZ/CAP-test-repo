#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[32];
    int age;
} User;

User* createUser(char *name, int age) {
    User *user = malloc(sizeof(User));

    strcpy(user->name, name); // CRITICAL: no bounds check
    user->age = age;

    return user;
}

int main() {
    User *user = createUser("VeryVeryVeryVeryVeryVeryLongUserName", 25);

    printf("User: %s\n", user->name);

    // MAJOR: memory leak, user is never freed

    return 0;
}
