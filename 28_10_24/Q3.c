#include <stdio.h>

int main() {
    int x = -3;            // Example value for x
    int zero_count = 0;    // Counter for zeros
    int minus_sum = 0;     // Sum for negative values
    int plus_sum = 0;      // Sum for positive values

    // Condition checks
    if (x == 0) {
        zero_count += 1;
    } else if (x < 0) {
        minus_sum += x;
    } else {
        plus_sum += x;
    }

    // Output the results
    printf("Zero count: %d\n", zero_count);
    printf("Minus sum: %d\n", minus_sum);
    printf("Plus sum: %d\n", plus_sum);

    return 0;
}
