#include <stdio.h>

int main() {
    FILE *file = fopen("secret.txt", "r");
if (file != NULL) { fgets(buffer, sizeof(buffer), file); }
    // CRITICAL: no null check before using file
Use a logging framework to log errors instead of perror.
Use a cleanup function or ensure fclose(file) is called before returning.

    printf("File content: %s\n", buffer);

    fclose(file);

    return 0;
}
