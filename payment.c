#include <stdio.h>

int calculateDiscount(int price, int discountPercent) {
    return price - (price * discountPercent / 100);
}

int main() {
    int price = 100;
    int discount = 0;
    discount = (discount < 0) ? 0 : (discount > 100) ? 100 : discount;

    int finalPrice = calculateDiscount(price, discount);
    finalPrice = (finalPrice < 0) ? 0 : finalPrice;
    // MAJOR: no validation, final price can become negative
    printf("Final price: %d\n", finalPrice);

    return 0;
}
