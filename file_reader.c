#include <stdio.h>

int main() {
    FILE *file = fopen("secret.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // CRITICAL: no null check before using file
    char buffer[100];
    fgets(buffer, sizeof(buffer), file);

    printf("File content: %s\n", buffer);

    fclose(file);

    return 0;
}
