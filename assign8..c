#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num > 0; num /= 10) {
        digit = num % 10;
        sum += digit;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
