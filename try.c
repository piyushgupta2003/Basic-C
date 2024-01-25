#include <stdio.h>

int main() {
    int num1, num2, num3;
    int sum;22
    printf("Enter first number:-\n");
    scanf("%d", &num1);

    printf("Enter second number:-\n");
    scanf("%d", &num2);

    printf("Enter third number:-\n");
    scanf("%d", &num3);

    sum = num1 + num2 + num3;

    if ((sum >= 0.4 * sum) && (num1 > 0.33 * sum) && (num2 > 0.33 * sum) && (num3 > 0.33 * sum)) {
        printf("pass\n");
    } else {
        printf("fail\n");
    }

    return 0;
}
