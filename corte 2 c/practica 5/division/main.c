#include <stdio.h>

int enterValue() {
    int Value;
    printf("Enter a number: ");
    scanf("%d", &Value);
    return Value;
}

float divide(int a, int b) {
    if(b == 0) {
        printf("Error: No se puede dividir por 0'\n");
        return 0;
    }
    float r = (float)a / b;
    return r;
}

void showResult(float r) {
    printf("Result: %.2f\n", r);
}

int main() {
    int operand1;
    int operand2;
    float result;
    
    printf("=== DIVISION ===\n");
    operand1 = enterValue();
    operand2 = enterValue();
    
    result = divide(operand1, operand2);
    if(operand2 != 0) {
        showResult(result);
    }
    
    return 0;
}

