#include <stdio.h>
#include <stdlib.h>
int a, b, r;

int main(){
	
	a = 16;
	b = 32;
	r = a+b;
	printf("El resultado de sumar %d y %d es: %d\n", a, b, r);
	
	if(r == 40){
		printf("El resultado %d si es = a 40", r);
	}
	else{
		if(r < 40){
			printf("El resultado %d si es < a 40", r);
		}
		else{
			if(r > 40){
				printf("El resultado %d si es > a 40", r);
			}
		}
	return 0;
}
}
