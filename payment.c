#include <stdio.h>

int calculateDiscount(int price, int discountPercent) {
    return price - (price * discountPercent / 100);
}
if (discount >= 0 && discount <= 100) { finalPrice = calculateDiscount(price, discount); } else { finalPrice = price; }
int main() {
    int price = 100;
    int discount = 150;
// Consider validating discount input.
    int finalPrice = calculateDiscount(price, discount);

    // MAJOR: no validation, final price can become negative
    printf("Final price: %d\n", finalPrice);

    return 0;
}
