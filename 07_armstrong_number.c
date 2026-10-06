#include <stdio.h>

int main() {
    int n, original, digit, sum = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &n);
    original = n;

    while (n != 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
