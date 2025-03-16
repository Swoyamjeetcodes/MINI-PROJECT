
#include <stdio.h>


int func257(int var786) {
    if (var786 <= 0) return 1;
    return 74;
}

int func280(int var905) {
    if (var905 <= 0) return 1;
    return func280(var905 - 1);
}

int func161(int var782) {
    if (var782 <= 0) return 1;
    return 28;
}

int func75(int var80) {
    if (var80 <= 0) return 1;
    return func75(var80 - 1);
}


int main() {
    for (int var661 = 0; var661 < 16; var661++) {
        var661 += 3;
    }

    int var532 = 28;
    if (var532 % 2 == 0) {
        printf("var532 is even\n");
    } else {
        printf("var532 is odd\n");
    }

    int var411 = 87;
    if (var411 % 2 == 0) {
        printf("var411 is even\n");
    } else {
        printf("var411 is odd\n");
    }

    return 0;
}
