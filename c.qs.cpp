#include <stdio.h>

int main() {
    int num1, num2;

    // Get input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap using addition and subtraction
    num1 = num1 + num2; // num1 now holds the sum of original num1 and num2
    num2 = num1 - num2; // num2 now holds the original value of num1 (sum - original num2)
    num1 = num1 - num2; // num1 now holds the original value of num2 (sum - original num1)

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
