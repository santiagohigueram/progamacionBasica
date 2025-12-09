#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, j;
    
    printf("Ingrese la dimension de la matriz (N): ");
    scanf("%d", &N);
    
    int matriz[N][N];
    float sumaMaximos = 0;
   
    printf("Ingrese los elementos:\n");
    for(i = 0; i < N; i++) {
        int maxFila;
        
        for(j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            
        
            if(j == 0) {
                maxFila = matriz[i][j];
            }
        
            else if(matriz[i][j] > maxFila) {
                maxFila = matriz[i][j];
            }
        }
        
        sumaMaximos += maxFila;
        printf("Maximo fila %d: %d\n", i, maxFila);
    }
    
    printf("Media de maximos: %.2f\n", sumaMaximos / N);
    
    return 0;
}
