#include <stdio.h>

int main() {
    int item = 5;     // Example value for item; you can change this as needed
    int product = 10; // Example value for product

    // If item is nonzero, multiply product by item and store the result in product
    if (item != 0) {
        product *= item;
    }

    // Print the value of product
    printf("The value of product is: %d\n", product);

    return 0;
}
