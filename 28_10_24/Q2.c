#include <stdio.h>

int main() {
    int x = 10;   // Example value for x
    int y = 5;    // Example value for y

    // Calculate the absolute difference without using abs or fabs
    if (x > y) {
        y = x - y;
    } else {
        y = y - x;
    }

    // Print the result
    printf("The absolute difference is: %d\n", y);

    return 0;
}
