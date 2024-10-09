#include <stdio.h>
#include <math.h>
#include <locale.h>

// Função para calcular o valor dentro da raiz quadrada
double calcular_radicando(double x1, double y1, double z1, double x2, double y2, double z2) {
    double deltaX = x2 - x1;
    double deltaY = y2 - y1;
    double deltaZ = z2 - z1;

    // Mostrando os detalhes dos cálculos
    printf("Cálculo dos deltas:\n");
    printf("deltaX = %.2lf - %.2lf = %.2lf\n", x2, x1, deltaX);
    printf("deltaY = %.2lf - %.2lf = %.2lf\n", y2, y1, deltaY);
    printf("deltaZ = %.2lf - %.2lf = %.2lf\n", z2, z1, deltaZ);

    double deltaX2 = pow(deltaX, 2);
    double deltaY2 = pow(deltaY, 2);
    double deltaZ2 = pow(deltaZ, 2);

    // Mostrando os detalhes dos quadrados
    printf("\nCálculo dos quadrados:\n");
    printf("deltaX² = %.2lf² = %.2lf\n", deltaX, deltaX2);
    printf("deltaY² = %.2lf² = %.2lf\n", deltaY, deltaY2);
    printf("deltaZ² = %.2lf² = %.2lf\n", deltaZ, deltaZ2);

    // Soma dos quadrados
    double soma = deltaX2 + deltaY2 + deltaZ2;

    // Mostrando a soma dos quadrados
    printf("\nSoma dos quadrados:\n");
    printf("%.2lf + %.2lf + %.2lf = %.2lf\n", deltaX2, deltaY2, deltaZ2, soma);

    return soma; // Este é o valor dentro da raiz
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    // Coordenadas do primeiro caso
    double x1_1 = -2, y1_1 = 0, z1_1 = 1;
    double x2_1 = 1, y2_1 = -3, z2_1 = 2;
    
    // Coordenadas do segundo caso
    double x1_2 = 1, y1_2 = 0, z1_2 = 1;
    double x2_2 = 2, y2_2 = -1, z2_2 = 0;
    
    // Calcula o radicando para o primeiro caso
    printf("Primeiro caso:\n");
    double radicando1 = calcular_radicando(x1_1, y1_1, z1_1, x2_1, y2_1, z2_1);
    printf("A distância entre P1 e P2 no primeiro caso é: raiz(%.0lf)\n", radicando1);

    // Calcula o radicando para o segundo caso
    printf("\nSegundo caso:\n");
    double radicando2 = calcular_radicando(x1_2, y1_2, z1_2, x2_2, y2_2, z2_2);
    printf("A distância entre P1 e P2 no segundo caso é: raiz(%.0lf)\n", radicando2);

    return 0;
}
