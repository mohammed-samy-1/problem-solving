#include <stdio.h>

int main(void) {
    int i;
    long long l;
    char c;
    float f;
    double d;
    scanf("%i %lli %c %f %lf",&i, &l ,&c, &f, &d);
    printf("%i \n%lli \n%c \n%.1f \n%.1f",i, l ,c, f, d);

}