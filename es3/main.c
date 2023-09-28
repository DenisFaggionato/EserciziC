#include <stdio.h>

int main() {
    int array[5];
    int somma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Inserisci il numero: ");
        scanf("%i", &array[i]);
        somma += array[i];
    }

    // Calcola la media come float
    float media = (float)somma / 5;

    printf("La somma è %i, la media è %.2f\n", somma, media);ù
    return 0;
}