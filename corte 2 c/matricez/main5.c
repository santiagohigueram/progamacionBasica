#include <stdio.h>

int main() {
    int N, i, j;
    
    printf("Ingrese la dimension de la matriz cuadrada (N): ");
    scanf("%d", &N);
    
    int matriz[N][N];
    int maximos[N];
    
    
    printf("Ingrese los elementos:\n");
    for(i = 0; i < N; i++) {
        printf("Fila %d: ", i);
        
      
        for(j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
        
   
        maximos[i] = matriz[i][0];
        for(j = 1; j < N; j++) {
            if(matriz[i][j] > maximos[i]) {
                maximos[i] = matriz[i][j];
            }
        }
    }
    
 
    printf("\nMatriz ingresada:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nVector de maximos: ");
    for(i = 0; i < N; i++) {
        printf("%d ", maximos[i]);
    }
    printf("\n");
    
    return 0;
}
