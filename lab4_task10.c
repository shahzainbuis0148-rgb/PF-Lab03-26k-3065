#include <stdio.h>
int main() {
    int zone, speed, limit, fine;
    printf("Enter zone type (1=School, 2=Highway, 3=Residential): ");
    scanf("%d", &zone);
    printf("Enter driver's speed: ");
    scanf("%d", &speed);
    switch(zone) {
        case 1:
            limit = 30;
            break;
        case 2:
            limit = 100;
            break;
        case 3:
            limit = 50;
            break;
        default:
            printf("Invalid Zone\n");
            return 0;
    }
    if (speed > limit) {
        fine = 1000;
        if (speed > limit + 20)
            fine = fine * 2;
        printf("Fine: Rs. %d\n", fine);
    }
    else {
        printf("No Fine\n");
    }
}
