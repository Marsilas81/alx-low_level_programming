#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int n) {
    int num = n;
    int reverse = 0;
    while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    return n == reverse;
}

int main() {
    int largest_palindrome = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            int product = i * j;
            if (is_palindrome(product) && product > largest_palindrome) {
                largest_palindrome = product;
            }
        }
    }
    printf("%d\n", largest_palindrome);
    return 0;
}
