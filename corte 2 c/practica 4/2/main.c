#include <stdio.h>

#define fila 3
#define columnas 3

int main() {
    int matriz[fila][columnas];
    int i, j;
    
    printf("Introduce los elementos de la matriz %dx%d:\n", fila, columnas);
    for(i = 0; i < fila; i++) {
        for(j = 0; j < columnas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nLa matriz introducida es:\n");
    for(i = 0; i < fila; i++) {
        for(j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
