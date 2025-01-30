#include <stdio.h>
 
int main() {
 
    double A, B, C, wA = 2, wB = 3, wC = 5, wT, avg;
    wT = wA + wB + wC;
    scanf("%lf\n%lf\n%lf", &A, &B, &C);
    avg = (A * wA + B * wB + C * wC) / wT;
    printf("MEDIA = %.1lf\n", avg);
 
    return 0;
}