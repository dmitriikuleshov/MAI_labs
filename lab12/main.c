#include <stdio.h>

int removeMiddleDigit(int number) {
    int numDigits = 0;
    int tempNumber = number;
    while (tempNumber != 0) {
        tempNumber /= 10;
        numDigits++;
    }
    
    if ( (numDigits % 2 != 0) && (numDigits != 1) ) {
        int middleDigitPos = numDigits / 2 + 1;
        int divisor = 1;

        for (int i = 1; i < middleDigitPos; ++i) {
            divisor *= 10;
        }
        int leftPart = number / (divisor * 10);
        int rightPart = number % divisor;
        
        return leftPart * divisor + rightPart;
    } else {
        return number;
    }
}

int main() {
    int number;
    printf("Введите число: ");
    scanf("%d", &number);
    int result = removeMiddleDigit(number);
    printf("Число без средней цифры: %d\n", result);
    
    return 0;
}
