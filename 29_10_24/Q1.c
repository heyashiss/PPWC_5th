#include <stdio.h>

int main() {
    long long int number, modifiedNumber = 0; // Using long long to handle large numbers
    int digit, place = 1; // 'place' keeps track of the position in the number

    // Prompt the user for input
    printf("Enter a number: ");
    scanf("%lld", &number);

    // Process each digit
    while (number > 0) {
        digit = number % 10; // Get the last digit
        number /= 10;        // Remove the last digit from the number

        // Replace 0 with 2 and 1 with 3
        if (digit == 0) {
            modifiedNumber += 2 * place;
        } else if (digit == 1) {
            modifiedNumber += 3 * place;
        } else {
            modifiedNumber += digit * place; // Keep the digit as is
        }
        
        place *= 10; // Move to the next position
    }

    // Output the modified number
    printf("Modified number: %lld\n", modifiedNumber);
    return 0;
}
