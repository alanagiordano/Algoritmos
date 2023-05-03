#include <stdio.h>

int main() {
    int n, i, melhor_volta = 1;
    float tempo, melhor_tempo, tempo_total = 0, tempo_medio;

    printf("informe o n de voltas: ");
    scanf("%d", &n);

    printf("informe os tempos das voltas:\n");

    scanf("%f", &tempo);
    melhor_tempo = tempo;

    for (i = 2; i <= n; i++) {
        scanf("%f", &tempo);

        if (tempo < melhor_tempo) {
            melhor_tempo = tempo;
            melhor_volta = i;
        }

        tempo_total += tempo;
    }

    tempo_medio = tempo_total / n;

    printf("melhor tempo: %.2f\n", melhor_tempo);
    printf("volta em que o melhor tempo ocorreu: %d\n", melhor_volta);
    printf("tempo medio das %d voltas: %.2f\n", n, tempo_medio);

    return 0;
}