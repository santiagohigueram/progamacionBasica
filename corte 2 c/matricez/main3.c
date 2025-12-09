#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;
    int i, j;
    
    printf("Ingrese filas (N): ");
    scanf("%d", &N);
    printf("Ingrese columnas (M): ");
    scanf("%d", &M);
    
    int matriz[N][M];
    int maximo, minimo, sumaTotal = 0;
    

    printf("Ingrese los elementos:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            
          
            if(i == 0 && j == 0) {
                maximo = minimo = matriz[i][j];
            }
            
            sumaTotal += matriz[i][j];
            
            if(matriz[i][j] > maximo) maximo = matriz[i][j];
            if(matriz[i][j] < minimo) minimo = matriz[i][j];
        }
    }
    
    printf("\nMaximo: %d\n", maximo);
    printf("Minimo: %d\n", minimo);
    printf("Media: %.2f\n", (float)sumaTotal / (N * M));
    
    return 0;
}
