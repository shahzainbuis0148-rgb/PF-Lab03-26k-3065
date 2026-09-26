#include <stdio.h>
int main() {
    int x,y;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("Enter another number : ");
    scanf("%d",&y);
    int sum = x + y;
    int product = x * y;
    int difference = x - y;
    float quotient = x/y;
    printf("The sum is : %d \nProdcut is : %d \nDifference is : %d \nQuotient is : %f",sum,product,difference,quotient);
}
