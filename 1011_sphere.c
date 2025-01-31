#include <stdio.h>
#include <math.h>
 
int main() {
 
    int R;
    double pi = 3.14159, vol;
    
    scanf("%d", &R);
    vol = (4 / 3.0) * pi * pow(R, 3);
    
    printf("VOLUME = %.3lf\n", vol);
 
    return 0;
}