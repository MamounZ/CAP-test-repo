#include <stdio.h>

int calculateDiscount(int price, int discountPercent) {
    return price - (price * discountPercent / 100);
}

int main() {
    int price = 100;
    int discount = 0;
    discount = (discount < 100) ? discount : 100;

    int finalPrice = calculateDiscount(price, discount);
    if (finalPrice < 0) finalPrice = 0;
    // MAJOR: no validation, final price can become negative
    printf("Final price: %d\n", finalPrice);

    return 0;
}
