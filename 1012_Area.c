#include <stdio.h>
 
int main() {
 
    double A, B, C, pi = 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);
    double triangle = (A * C) / 2;
    double circle = pi * C * C;
    double trapezium = ((A + B) / 2)* C;
    double square = B * B;
    double rectangle = A * B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangle, circle, trapezium, square, rectangle);
 
    return 0;
}