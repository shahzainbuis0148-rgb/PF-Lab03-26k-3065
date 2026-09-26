#include <stdio.h>
int main() {
    float number;
    printf("Enter a floating-point number: ");
    scanf("%f", &number);
    printf("2 decimal places: %.2f\n", number);
    printf("6 decimal places: %.6f\n", number);
}
