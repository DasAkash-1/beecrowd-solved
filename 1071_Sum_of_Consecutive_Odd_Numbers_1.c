#include <stdio.h>
 
int main() {
 
    int X, Y;
    scanf("%d\n%d", &X, &Y);
    int sum = 0;
    if (X > Y)
    {
        int temp = X;
        X = Y;
        Y = temp;
    }
    
    for (int i = X + 1; i < Y; i++){
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);
 
    return 0;
}