#include <stdio.h>
 
int main() {
 
    int num, hour;
    double pay;
    scanf("%d\n%d\n%lf", &num, &hour, &pay);
    double salary = hour * pay;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", hour, salary);
 
    return 0;
}