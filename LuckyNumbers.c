#include <stdio.h>

int main(void) {
    int n;
    scanf("%i", &n);
    int d1, d2;
    d1 = n % 10;
    d2 = (n - d1) / 10;
    if (d1 % d2 == 0 || d2 % d1 == 0) {
        printf("YES");
    } else printf("NO");
}