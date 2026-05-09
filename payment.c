#include <stdio.h>

int calculateDiscount(int price, int discountPercentage) {
    return price - (price * discountPercent / 100);
if (discount >= 0 && discount <= 100) { finalPrice = calculateDiscount(price, discount); } else { finalPrice = price; }
if (discount >= 0 && discount <= 100) { finalPrice = calculateDiscount(price, discount); } else { finalPrice = price; }
int main() {
if (finalPrice < 0) { finalPrice = 0; }
    int discount = 150;
// Consider validating discount input.
    int finalPrice = calculateDiscount(price, discount);

    // MAJOR: no validation, final price can become negative
    printf("Final price: %d\n", finalPrice);

    return 0;
}
