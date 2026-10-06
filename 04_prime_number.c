#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2) isPrime = 0;

    for (i = 2; i <= n / 2 && isPrime; i++) {
        if (n % i == 0) isPrime = 0;
    }

    if (isPrime) printf("%d is a prime number.\n", n);
    else printf("%d is not a prime number.\n", n);

    return 0;
}
