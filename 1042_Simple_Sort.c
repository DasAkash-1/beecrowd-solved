#include <stdio.h>
 
int main() {
 
    int a, b, c, temp;
    
    scanf("%d %d %d", &a, &b, &c);
    int a1 = a, b1 = b, c1 = c;
    
    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }
    if(a > c){
        temp = a;
        a = c;
        c = temp;
    }
    if(b > c){
        temp = b;
        b = c;
        c = temp;
    }
    
    printf("%d\n%d\n%d\n\n", a, b, c);
    printf("%d\n%d\n%d\n", a1, b1, c1);
 
    return 0;
}