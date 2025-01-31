#include <stdio.h>
 
int main() {
 
    double a, b, c, temp, i, j, k;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if(a < b){
        temp = a;
        a = b;
        b = temp;
    }
    if(a < c){
        temp = a;
        a = c;
        c = temp;
    }
    if(b < c){
        temp = b;
        b = c;
        c = temp;
    }
    
    i = a * a;
    j = b + c;
    k = (b * b) + (c * c);
    
    if(a >= j){
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if(i == k){
        printf("TRIANGULO RETANGULO\n");
        }
        if(i > k){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(i < k){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(a == b && b == c){
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(a == b || b == c){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    
    return 0;
}