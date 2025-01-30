#include <stdio.h>
 
int main() {
 
    double salary, sale, total, comm;
    char seller[30];
    
    scanf("%s", seller);
    scanf("%lf", &salary);
    scanf("%lf", &sale);
    comm = sale * 15 / 100;
    total = salary + comm;
    
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}