#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;
    int i, j;
    
    printf("Ingrese el numero de filas (N): ");
    scanf("%d", &N);
    printf("Ingrese el numero de columnas (M): ");
    scanf("%d", &M);
    
    float matriz[N][M];
    float sumaFilas[N];    
    float sumaColumnas[M]; 
    float sumaTotal = 0;
    

    for(i = 0; i < N; i++) {
        sumaFilas[i] = 0;
    }
    for(j = 0; j < M; j++) {
        sumaColumnas[j] = 0;
    }
    
    
    printf("\nIngrese los elementos de la matriz %dx%d:\n", N, M);
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    
    
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            sumaFilas[i] += matriz[i][j];     
            sumaColumnas[j] += matriz[i][j];  
            sumaTotal += matriz[i][j];       
        }
    }
    

    printf("\n=== TABLA CON SUMAS ===\n");
    

    for(i = 0; i < N; i++) {
        printf("| ");
        for(j = 0; j < M; j++) {
            printf("%5.1f ", matriz[i][j]);
        }
        printf("| = %6.1f\n", sumaFilas[i]);
    }
    
    
    printf(" ");
    for(j = 0; j < M; j++) {
        printf("-------");
    }
    printf("\n");
    
    
    printf("  ");
    for(j = 0; j < M; j++) {
        printf("%5.1f  ", sumaColumnas[j]);
    }
    printf("\n");
    
  
    printf("\nSuma total de todos los elementos: %.1f\n", sumaTotal);
    
    return 0;
}
