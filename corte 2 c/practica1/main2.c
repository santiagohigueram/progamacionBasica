#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int matrix[2][3] = {{5, 6, 7}, {8, 9, 10}};
	matrix [0][0] = 9;
	printf("%d", matrix[0][0]);
	
	return 0;
}

