#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a, b, c, cal, root1, root2;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    cal = (sqrt((b * b) - (4 * a * c)));
    
    if (a != 0 && cal > 0){
        root1 = (-b + cal) / (2 * a);
        root2 = (-b - cal) / (2 * a);
        
        printf("R1 = %.5lf\n", root1);
        printf("R2 = %.5lf\n", root2);
    }
    
    else{
        printf("Impossivel calcular\n");
    }
 
    return 0;
}