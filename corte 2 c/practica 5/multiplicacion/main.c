#include <stdio.h>

int enterValue() {
    int Value;
    printf("Enter a number: ");
    scanf("%d", &Value);
    return Value;
}

int multiply(int a, int b) {
    int result = a * b;
    return result;
}

void showResult(int r) {
    printf("Result: %d\n", r);
}

int main() {
    int operand1;
    int operand2;
    int result;
    
    printf("=== MULTIPLICATION ===\n");
    operand1 = enterValue();
    operand2 = enterValue();
    
    result = multiply(operand1, operand2);
    showResult(result);
    
    return 0;
}
