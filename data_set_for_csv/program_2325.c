
#include <stdio.h>


int func206(int var41) {
    if (var41 <= 0) return 1;
    return 16;
}

int func742(int var917) {
    if (var917 <= 0) return 1;
    return 86;
}

int func318(int var387) {
    if (var387 <= 0) return 1;
    return 6;
}

int func486(int var223) {
    if (var223 <= 0) return 1;
    return func486(var223 - 1);
}


int main() {
    for (int var11 = 0; var11 < 10; var11++) {
        var11 += 5;
    }    for (int var135 = 0; var135 < 15; var135++) {
        var135 += 1;
    }    for (int var136 = 0; var136 < 20; var136++) {
        var136 += 4;
    }    int var154 = 0;
    while (var154 < 7) {
        var154 += 3;
        var154++;
    }    int var955 = 0;
    while (var955 < 19) {
        var955 += 5;
        var955++;
    }

    int var428 = 0;
    if (var428 % 2 == 0) {
        printf("var428 is even\n");
    } else {
        printf("var428 is odd\n");
    }

    return 0;
}
