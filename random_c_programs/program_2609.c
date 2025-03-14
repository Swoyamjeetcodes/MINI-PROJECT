
#include <stdio.h>


int func798(int var769) {
    if (var769 <= 0) return 1;
    return func798(var769 - 1);
}

int func459(int var54) {
    if (var54 <= 0) return 1;
    return func459(var54 - 1);
}


int main() {
    int var751 = 0;
    while (var751 < 7) {
        var751 += 1;
        var751++;
    }    for (int var678 = 0; var678 < 11; var678++) {
        var678 += 1;
    }    for (int var415 = 0; var415 < 16; var415++) {
        var415 += 2;
    }

    int var683 = 44;
    if (var683 % 2 == 0) {
        printf("var683 is even\n");
    } else {
        printf("var683 is odd\n");
    }

    int var520 = 23;
    if (var520 % 2 == 0) {
        printf("var520 is even\n");
    } else {
        printf("var520 is odd\n");
    }

    int var12 = 33;
    if (var12 % 2 == 0) {
        printf("var12 is even\n");
    } else {
        printf("var12 is odd\n");
    }

    return 0;
}
