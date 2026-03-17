#include <stdio.h>
#include <string.h>

void strlower(char *s) {
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            printf("%c", s[i] + 32);
        } else {
            printf("%c", s[i]);
        }
    }
}

void strupper(char *s) {
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            printf("%c", s[i] - 32);
        } else {
            printf("%c", s[i]);
        }
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    while (n--) {
        char s[200];
        if (scanf("%s", s) == 1) {
            strlower(s);
            printf("\n");
            strupper(s);
            printf("\n");
        }
    }

    return 0;
}