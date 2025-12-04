#include <stdio.h>

int main() {
    int n, x, sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        sum += x;
    }

    int total = n * (n + 1) / 2;
    printf("%d", total - sum);

    return 0;
}
