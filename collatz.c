#include <stdio.h>

int collatz_length(long long x) {
    int length = 1;
    while (x != 1) {
        if (x % 2 == 0) {
            x = x / 2;
        } else {
            x = 3 * x + 1;
        }
        length++;
    }
    return length;
}

int main() {
    long long N;
    printf("Ingrese el valor de N: ");
    scanf("%lld", &N);

    printf("x | y\n");
    printf("--------\n");
    for (long long x = 3; x <= N; x++) {
        int length = collatz_length(x);
        printf("%lld | %d\n", x, length);
    }

    return 0;
}
