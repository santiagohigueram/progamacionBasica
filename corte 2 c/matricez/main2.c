#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int i, j;
    
    int sumaPares = 0, contadorPares = 0;
    int sumaImpares = 0, contadorImpares = 0;
    
   
    int sumaPosPares = 0, contadorPosPares = 0;
    int sumaPosImpares = 0, contadorPosImpares = 0;
    
    
    printf("Ingrese la dimension de la matriz cuadrada (N): ");
    scanf("%d", &N);
    
    int matriz[N][N];
    
 
    printf("\nIngrese los elementos de la matriz:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            
            if(matriz[i][j] % 2 == 0) {
                sumaPares += matriz[i][j];
                contadorPares++;
            } else {
                sumaImpares += matriz[i][j];
                contadorImpares++;
            }
            
            
            if((i + j) % 2 == 0) {
                
                sumaPosPares += matriz[i][j];
                contadorPosPares++;
            } else {
                
                sumaPosImpares += matriz[i][j];
                contadorPosImpares++;
            }
        }
    }
    
    
    printf("\n=== Resultados ===\n");
    
    printf("\n1. NUMEROS PARES (por valor):\n");
    printf("Suma: %d\n", sumaPares);
    if(contadorPares > 0) {
        printf("Cantidad: %d\n", contadorPares);
        printf("Media: %.2f\n", (float)sumaPares / contadorPares);
    } else {
        printf("No hay numeros pares\n");
    }
    
    printf("\n2. NUMEROS IMPARES (por valor):\n");
    printf("Suma: %d\n", sumaImpares);
    if(contadorImpares > 0) {
        printf("Cantidad: %d\n", contadorImpares);
        printf("Media: %.2f\n", (float)sumaImpares / contadorImpares);
    } else {
        printf("No hay numeros impares\n");
    }
    
    printf("\n3. POSICIONES PARES (i+j es par):\n");
    printf("Suma: %d\n", sumaPosPares);
    if(contadorPosPares > 0) {
        printf("Cantidad: %d\n", contadorPosPares);
        printf("Media: %.2f\n", (float)sumaPosPares / contadorPosPares);
    } else {
        printf("No hay posiciones pares\n");
    }
    
    
    printf("\n4. POSICIONES IMPARES (i+j es impar):\n");
    printf("Suma: %d\n", sumaPosImpares);
    if(contadorPosImpares > 0) {
        printf("Cantidad: %d\n", contadorPosImpares);
        printf("Media: %.2f\n", (float)sumaPosImpares / contadorPosImpares);
    } else {
        printf("No hay posiciones impares\n");
    }
    
    return 0;
}
