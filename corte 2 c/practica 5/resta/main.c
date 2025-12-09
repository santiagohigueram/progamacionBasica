#include <stdio.h>

int enterValue() {
    int Value;
    printf("Enter a number: ");
    scanf("%d", &Value);
    return Value;
}

int subtract(int a, int b) {
    int r = a - b;
    return r;
}

void showResult(int r) {
    printf("Result: %d\n", r);
}

int main() {
    int operand1;
    int operand2;
    int result;
    
    printf("=== SUBTRACTION ===\n");
    operand1 = enterValue();
    operand2 = enterValue();
    
    result = subtract(operand1, operand2);
    showResult(result);
    
    return 0;
}
