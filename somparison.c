#include <stdio.h>

int main(void) {
    int x, y;
    char op;
    scanf("%i %c %i", &x, &op, &y);
    switch (op) {
        case '>':
            if (x > y) {
                printf("Right");
            } else {
                printf("Wrong");
            }
            break;
        case '<':
            if (x < y) {
                printf("Right");
            } else {
                printf("Wrong");
            }
            break;
        case '=':
            if (x == y) {
                printf("Right");
            } else {
                printf("Wrong");
            }
            break;
    }
}
