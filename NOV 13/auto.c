#include <stdio.h>

int automor(int n, int s) {
    while (n != 0) {
        if (n % 10 != s % 10) {
            return 0;
        }
        n = n / 10;
        s = s / 10;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int s = n * n;
    if (automor(n, s)) {
        printf("%d is an automorphic number.\n", n);
    } else {
        printf("%d is not an automorphic number.\n", n);
    }
    return 0;
}