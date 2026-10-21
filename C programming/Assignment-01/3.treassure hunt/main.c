#include <stdio.h>

int main() {
    int gold, x, y, longBen, blackbeard, remaining;

    scanf("%d %d %d", &gold, &x, &y);

    longBen = gold * x / 100;
    remaining = gold - longBen;

    blackbeard = remaining * y / 100;
    remaining -= blackbeard;

    printf("%d\n", longBen);
    printf("%d\n", blackbeard);
    printf("%d\n", remaining / 4);

    return 0;
}