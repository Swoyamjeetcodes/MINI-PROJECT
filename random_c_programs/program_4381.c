
#include <stdio.h>


int func677(int var768) {
    if (var768 <= 0) return 1;
    return func677(var768 - 1);
}

int func120(int var748) {
    if (var748 <= 0) return 1;
    return func120(var748 - 1);
}

int func48(int var332) {
    if (var332 <= 0) return 1;
    return 1;
}

int func255(int var511) {
    if (var511 <= 0) return 1;
    return func255(var511 - 1);
}

int func347(int var184) {
    if (var184 <= 0) return 1;
    return 23;
}


int main() {
    int var39 = 0;
    while (var39 < 9) {
        var39 += 5;
        var39++;
    }    int var188 = 0;
    while (var188 < 18) {
        var188 += 1;
        var188++;
    }    for (int var230 = 0; var230 < 14; var230++) {
        var230 += 3;
    }

    int var24 = 3;
    if (var24 % 2 == 0) {
        printf("var24 is even\n");
    } else {
        printf("var24 is odd\n");
    }

    return 0;
}
