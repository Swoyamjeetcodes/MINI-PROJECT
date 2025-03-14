
#include <stdio.h>


int func649(int var809) {
    if (var809 <= 0) return 1;
    return func649(var809 - 1);
}

int func59(int var144) {
    if (var144 <= 0) return 1;
    return func59(var144 - 1);
}

int func567(int var164) {
    if (var164 <= 0) return 1;
    return func567(var164 - 1);
}

int func344(int var499) {
    if (var499 <= 0) return 1;
    return func344(var499 - 1);
}

int func712(int var218) {
    if (var218 <= 0) return 1;
    return func712(var218 - 1);
}


int main() {
    for (int var137 = 0; var137 < 13; var137++) {
        var137 += 4;
    }    for (int var167 = 0; var167 < 13; var167++) {
        var167 += 3;
    }

    int var269 = 22;
    if (var269 % 2 == 0) {
        printf("var269 is even\n");
    } else {
        printf("var269 is odd\n");
    }

    int var363 = 76;
    if (var363 % 2 == 0) {
        printf("var363 is even\n");
    } else {
        printf("var363 is odd\n");
    }

    return 0;
}
