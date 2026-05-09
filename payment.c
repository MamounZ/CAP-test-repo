#include <stdio.h>

int calculateDiscount(int price, int discountPercent) {
    return price - (price * discountPercent / 100);
}

int main() {
    int price = 100;
    int discount = 150;

    int finalPrice = calculateDiscount(price, discount);

    // MAJOR: no validation, final price can become negative
    printf("Final price: %d\n", finalPrice);

    return 0;
}
