#include <stdio.h>

int main() {
    FILE *file = fopen("secret.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

if (file != NULL) {
	char buffer[100];
	if (fgets(buffer, sizeof(buffer), file) == NULL) {
		perror("Error reading file");
		fclose(file);
		return 1;
	}
	printf("File content: %s\n", buffer);
}
    char buffer[100];
    if (fgets(buffer, sizeof(buffer), file) == NULL) {
        perror("Error reading file");
        fclose(file);
        return 1;
    }

    printf("File content: %s\n", buffer);

    fclose(file);

    return 0;
}
