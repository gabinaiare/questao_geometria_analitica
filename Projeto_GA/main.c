#include <stdio.h>
#include <math.h>
#include <locale.h>

// Função para calcular o valor dentro da raiz quadrada
double calcular_radicando(int x1, int y1, int z1, int x2, int y2, int z2) {
    int deltaX = x2 - x1;
    int deltaY = y2 - y1;
    int deltaZ = z2 - z1;

    // Mostrando os detalhes dos cálculos
    printf("Cálculo dos deltas:\n");
    printf("deltaX = %d - %d = %d\n", x2, x1, deltaX);
    printf("deltaY = %d - %d = %d\n", y2, y1, deltaY);
    printf("deltaZ = %d - %d = %d\n", z2, z1, deltaZ);

    int deltaX2 = pow(deltaX, 2);
    int deltaY2 = pow(deltaY, 2);
    int deltaZ2 = pow(deltaZ, 2);

    // Mostrando os detalhes dos quadrados
    printf("\nCálculo dos quadrados:\n");
    printf("deltaX² = %d² = %d\n", deltaX, deltaX2);
    printf("deltaY² = %d² = %d\n", deltaY, deltaY2);
    printf("deltaZ² = %d² = %d\n", deltaZ, deltaZ2);

    // Soma dos quadrados
    int soma = deltaX2 + deltaY2 + deltaZ2;

    // Mostrando a soma dos quadrados
    printf("\nSoma dos quadrados:\n");
    printf("%d + %d + %d = %d\n", deltaX2, deltaY2, deltaZ2, soma);

    return soma; // Este é o valor dentro da raiz
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x1, y1, z1;
    int x2, y2, z2;

    // Solicitando os valores das coordenadas ao usuário
    printf("Insira as coordenadas do primeiro ponto (x1, y1, z1):\n");
    scanf("%d %d %d", &x1, &y1, &z1);

    printf("Insira as coordenadas do segundo ponto (x2, y2, z2):\n");
    scanf("%d %d %d", &x2, &y2, &z2);

    double radicando = calcular_radicando(x1, y1, z1, x2, y2, z2);
    printf("\nA distância entre P1 e P2 é: raiz(%.0lf)\n", radicando);

    return 0;
}
