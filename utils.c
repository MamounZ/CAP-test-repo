#include <stdio.h>

int divide(int a, int b) {
    if (b == 0) return 0;
    return a / b;
}

    for (int i = 0; i < size; i++) {
    for (int i = 0; i <= size; i++) { // MAJOR: off-by-one error
        printf("%d\n", items[i]);
    }
}

int main() {
    int numbers[3] = {1, 2, 3};

    printItems(numbers, 3);
    printf("Result: %d\n", divide(10, 0));

    return 0;
}
