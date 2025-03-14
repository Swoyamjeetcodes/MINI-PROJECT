
#include <stdio.h>


int func94(int var707) {
    if (var707 <= 0) return 1;
    return 2;
}

int func262(int var820) {
    if (var820 <= 0) return 1;
    return func262(var820 - 1);
}

int func884(int var352) {
    if (var352 <= 0) return 1;
    return func884(var352 - 1);
}

int func736(int var375) {
    if (var375 <= 0) return 1;
    return func736(var375 - 1);
}

int func585(int var417) {
    if (var417 <= 0) return 1;
    return func585(var417 - 1);
}

int func757(int var269) {
    if (var269 <= 0) return 1;
    return func757(var269 - 1);
}

int func366(int var492) {
    if (var492 <= 0) return 1;
    return func366(var492 - 1);
}


int main() {
    for (int var948 = 0; var948 < 16; var948++) {
        var948 += 4;
    }    for (int var235 = 0; var235 < 18; var235++) {
        var235 += 5;
    }

    int var920 = 40;
    if (var920 % 2 == 0) {
        printf("var920 is even\n");
    } else {
        printf("var920 is odd\n");
    }

    return 0;
}
