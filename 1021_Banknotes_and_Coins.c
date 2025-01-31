#include <stdio.h>

int main() {
    int n, n2, n5, n10, n20, n50, n100;
    int m1, m50, m25, m10, m5, m01;
    double value;

    scanf("%lf", &value);
    
    int cents = (int)(value * 100 + 0.5);

    n100 = cents / 10000;
    cents %= 10000;
    n50 = cents / 5000;
    cents %= 5000;
    n20 = cents / 2000;
    cents %= 2000;
    n10 = cents / 1000;
    cents %= 1000;
    n5 = cents / 500;
    cents %= 500;
    n2 = cents / 200;
    cents %= 200;
    
    m1 = cents / 100;
    cents %= 100;
    m50 = cents / 50;
    cents %= 50;
    m25 = cents / 25;
    cents %= 25;
    m10 = cents / 10;
    cents %= 10;
    m5 = cents / 5;
    cents %= 5;
    m01 = cents;

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);

    printf("MOEDAS:\n");
    
    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m01);

    return 0;
}
