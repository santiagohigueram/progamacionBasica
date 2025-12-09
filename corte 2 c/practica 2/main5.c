#include <stdio.h>

#define SIZE 5

int main() {
    int arreglo[SIZE];
    int i;
    
    printf("Introduce %d n?meros enteros:\n", SIZE);
    
    for(i = 0; i < SIZE; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    
    printf("\nLos numeros que introdujiste son:\n");
    for(i = 0; i < SIZE; i++) {
        printf("%d ", arreglo[i]);
    }
    
    return 0;
}

