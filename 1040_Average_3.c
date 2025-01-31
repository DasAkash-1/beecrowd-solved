#include <stdio.h>
 
int main() {
 
    double N1, N2, N3, N4, avg;
    int W1 = 2, W2 = 3, W3 = 4, W4 = 1, WT;
    
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    
    WT = W1 + W2 + W3 + W4;
    
    avg = (N1 * W1 + N2 * W2 + N3 * W3 + N4 * W4) / WT;
    
    printf("Media: %.1lf\n", avg);
    double pass = 7.0, rep = 5.0;
    if(avg > pass){
        printf("Aluno aprovado.\n");
    }
    else if(avg < rep){
        printf("Aluno reprovado.\n");
    }
    else if(avg < pass && avg >= rep){
        printf("Aluno em exame.\n");
        double N5, pass2 = 5.0, rep2 = 4.9;
        scanf("%lf", &N5);
        printf("Nota do exame: %.1lf\n", N5);
        double avg2 = (avg + N5) / 2;
        if(avg2 >= pass2){
            printf("Aluno aprovado.\n");
        }
        else if(avg2 <= rep2){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", avg2);
    }
 
    return 0;
}