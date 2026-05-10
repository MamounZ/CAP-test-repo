#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[32];
    int age;
} User;

    strncpy(user->name, name, sizeof(user->name) - 1);
    user->name[sizeof(user->name) - 1] = '\0';
    User *user = malloc(sizeof(User));

    strcpy(user->name, name); // CRITICAL: no bounds check
    user->age = age;
    User *user = createUser("VeryVeryVeryVeryVeryVeryLongUserName", 25);
    free(user);
    return user;
}

int main() {
    User *user = createUser("VeryVeryVeryVeryVeryVeryLongUserName", 25);

    printf("User: %s\n", user->name);

    // MAJOR: memory leak, user is never freed

    return 0;
}
