#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char binary[100];
    int decimal = 0, i, length;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    length = strlen(binary);

    for (i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);
        }
    }

    printf("Decimal value of %s is %d", binary, decimal);

    return 0;
}