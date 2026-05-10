#include <stdio.h>

int calculateDiscount(int price, int discountPercent) {
    return price - (price * discountPercent / 100);
}

    if (discount < 0 || discount > 100) {
        printf("Invalid discount percentage\n");
        return 1;
    }
    int finalPrice = calculateDiscount(price, discount);
    int price = 100;
    int discount = 150;

    int finalPrice = calculateDiscount(price, discount);

    // MAJOR: no validation, final price can become negative
    printf("Final price: %d\n", finalPrice);

    return 0;
}
