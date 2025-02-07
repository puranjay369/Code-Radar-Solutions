#include <stdio.h>

int main() {
    int num, isPrime = 1; // Assume the number is prime
   
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // If the number is divisible by any number other than 1 and itself
                break;
            }
        }
    }

    if (isPrime) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}
