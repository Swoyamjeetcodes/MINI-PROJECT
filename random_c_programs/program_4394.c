
#include <stdio.h>


int func248(int var904) {
    if (var904 <= 0) return 1;
    return func248(var904 - 1);
}

int func463(int var31) {
    if (var31 <= 0) return 1;
    return 64;
}

int func65(int var259) {
    if (var259 <= 0) return 1;
    return func65(var259 - 1);
}

int func846(int var141) {
    if (var141 <= 0) return 1;
    return 9;
}

int func60(int var752) {
    if (var752 <= 0) return 1;
    return func60(var752 - 1);
}


int main() {
    for (int var920 = 0; var920 < 7; var920++) {
        var920 += 4;
    }

    int var967 = 21;
    if (var967 % 2 == 0) {
        printf("var967 is even\n");
    } else {
        printf("var967 is odd\n");
    }

    int var515 = 13;
    if (var515 % 2 == 0) {
        printf("var515 is even\n");
    } else {
        printf("var515 is odd\n");
    }

    return 0;
}
