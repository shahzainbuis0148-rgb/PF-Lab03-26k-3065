#include <stdio.h>
int main() {
    float amount;
    int premium, city;
    printf("Enter order amount: ");
    scanf("%f", &amount);
    printf("Are you a premium member? (1 for Yes, 0 for No): ");
    scanf("%d", &premium);
    printf("Is the delivery within city? (1 for Yes, 0 for No): ");
    scanf("%d", &city);
    if (amount > 3000 || premium == 1)
        printf("Delivery Charge: FREE\n");
    else
        printf("Delivery Charge: Applicable\n");
    if (amount < 50000 && city == 1)
        printf("COD: Available\n");
    else
        printf("COD: Not Available\n");
}
