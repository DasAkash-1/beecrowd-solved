#include <stdio.h>
 
int main() {
 
    int prod1, prod2, c1, c2;
    double p1, p2;
    scanf("%d %d %lf", &prod1, &c1, &p1);
    scanf("%d %d %lf", &prod2, &c2, &p2);
    double sum = (c1 * p1) + (c2 * p2);
    printf("VALOR A PAGAR: R$ %.2lf\n", sum);
    return 0;
}