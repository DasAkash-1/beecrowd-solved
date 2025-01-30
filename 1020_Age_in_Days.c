#include <stdio.h>
 
int main() {
 
    int y, m, d, age, remain;
    scanf("%d", &age);
    y = age / 365;
    remain = age % 365;
    m = remain / 30;
    d =  remain % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y , m, d);
 
    return 0;
}