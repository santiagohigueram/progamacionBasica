#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;
    int i, j;
    int contadorPares = 0;
    
    printf("Ingrese el numero de filas (N): ");
    scanf("%d", &N);
    printf("Ingrese el numero de columnas (M): ");
    scanf("%d", &M);
    
   
    int matriz[N][M];
    
    printf("\nIngrese los elementos de la matriz:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
  
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
          
            if(matriz[i][j] % 2 == 0) {
                contadorPares++;
            }
        }
    }
    
    printf("\nLa matriz tiene %d valores pares\n", contadorPares);
    
    return 0;
}
