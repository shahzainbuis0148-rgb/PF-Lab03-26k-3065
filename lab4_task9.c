#include <stdio.h>
int main() {
    int people;
    float weight;
    printf("Enter number of people: ");
    scanf("%d", &people);
    printf("Enter total weight: ");
    scanf("%f", &weight);
    if (weight > 1000 && people > 10)
        printf("No entry: Overweight and Too Many People\n");
    else if (weight > 1000)
        printf("No entry: Overweight\n");
    else if (people > 10)
        printf("No entry: People Limit Exceeded\n");
    else
        printf("Elevator will work Normally\n");
}
