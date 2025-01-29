#include <stdio.h>
 
int main() {
 
    double A, B;
    scanf("%lf\n%lf", &A, &B);
    double weightT = 3.5 + 7.5;
    double avg = (A * 3.5 + B * 7.5) / weightT;
    printf("MEDIA = %.5lf\n", avg);
 
    return 0;
}