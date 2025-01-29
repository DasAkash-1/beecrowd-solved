#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int greatAB = (a + b + abs(a - b)) / 2;
    int greatABC = (greatAB + c + abs(greatAB - c)) / 2;
    printf("%d eh o maior\n", greatABC);
    return 0;
}