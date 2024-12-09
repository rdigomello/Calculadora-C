#include <stdio.h>
#include <math.h>

int main(void) {
    int a;
    double b, c, d;
    char continuar;

    do {
        printf("Calculadora\n[1] Soma\n[2] Subtração\n[3] Multiplicação\n[4] Divisão\n[5] Potência\n[6] Raiz Quadrada\n[7] Sair\nQual operação você quer realizar? ");
        scanf("%d", &a);

        if (a == 1) {
            printf("Primeiro Número da Soma: ");
            scanf("%lf", &b);
            printf("Segundo Número da Soma: ");
            scanf("%lf", &c);
            d = b + c;
            printf("A soma dos números %.2lf e %.2lf é %.2lf\n", b, c, d);
        } else if (a == 2) {
            printf("Primeiro Número da Subtração: ");
            scanf("%lf", &b);
            printf("Segundo Número da Subtração: ");
            scanf("%lf", &c);
            d = b - c;
            printf("A subtração dos números %.2lf e %.2lf é %.2lf\n", b, c, d);
        } else if (a == 3) {
            printf("Primeiro Número da Multiplicação: ");
            scanf("%lf", &b);
            printf("Segundo Número da Multiplicação: ");
            scanf("%lf", &c);
            d = b * c;
            printf("A multiplicação dos números %.2lf e %.2lf é %.2lf\n", b, c, d);
        } else if (a == 4) {
            printf("Primeiro Número da Divisão: ");
            scanf("%lf", &b);
            printf("Segundo Número da Divisão: ");
            scanf("%lf", &c);
            if (c != 0) {
                d = b / c;
                printf("A divisão dos números %.2lf e %.2lf é %.2lf\n", b, c, d);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
        } else if (a == 5) {
            printf("Base da Potência: ");
            scanf("%lf", &b);
            printf("Expoente da Potência: ");
            scanf("%lf", &c);
            d = pow(b, c);
            printf("%.2lf elevado a %.2lf é %.2lf\n", b, c, d);
        } else if (a == 6) {
            printf("Número para calcular a Raiz Quadrada: ");
            scanf("%lf", &b);
            if (b >= 0) {
                d = sqrt(b);
                printf("A raiz quadrada de %.2lf é %.2lf\n", b, d);
            } else {
                printf("Erro: Não é possível calcular a raiz quadrada de um número negativo.\n");
            }
        } else if (a == 7) {
            printf("Saindo da calculadora.\n");
            break;
        } else {
            printf("Operação inválida.\n");
        }

        printf("Deseja realizar outra operação? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    return 0;    
}