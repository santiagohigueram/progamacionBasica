#include <stdio.h>
#include <stdlib.h>

int main(){
	int matrix[2][3] = { {3, 4, 6}, {2, 8, 5} };
	
	int i, j;
	for (i = 0; i < 2; i++) {
	 	for (j = 0; j < 3; j++) {
			printf("%d\n", matrix[i][j]);
		}
	}
return 0;
}
