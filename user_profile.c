#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[32];
    int age;
if (strlen(name) < sizeof(user->name)) { strcpy(user->name, name); }

typedef struct { char name[32]; int age; } User;
    User *user = malloc(sizeof(User));
free(user); // should be called in main after usage
    strcpy(user->name, name); // CRITICAL: no bounds check
free(user);

    return user;
}

int main() {
    User *user = createUser("VeryVeryVeryVeryVeryVeryLongUserName", 25);

    printf("User: %s\n", user->name);

    // MAJOR: memory leak, user is never freed

    return 0;
}
