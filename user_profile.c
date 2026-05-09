#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[32];
    int age;
if (strlen(name) < sizeof(user->name)) { strcpy(user->name, name); }

User* createUser(char *name, int age) {
    User *user = malloc(sizeof(User));

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
