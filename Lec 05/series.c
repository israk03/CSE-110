// Sum of the series: 11/1 + 21/2+ 31/3 + 41/4  + 51/5

#include <stdio.h>

// Function to calculate the sum of the series
double calculateSeriesSum(int terms) {
    double sum = 0;

    for (int i = 1; i <= terms; ++i) {
        sum += (10 * i + 1) / (double)i;
    }

    return sum;
}

int main() {
    int terms = 5; // Number of terms in the series

    // Call the function to calculate the sum
    double result = calculateSeriesSum(terms);

    // Display the result
    printf("Sum of the series: %.2lf\n", result);

    return 0;
}
