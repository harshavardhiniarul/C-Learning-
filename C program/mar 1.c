#include <stdio.h>

int main() {
    int n, key = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) key = 1;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            key = 1;
            break;
        }
    }
    if (key == 0) printf("%d is Prime\n", n);
    else printf("%d is not Prime\n", n);
    return 0;
}
