
#include <stdio.h>


int func290(int var864) {
    if (var864 <= 0) return 1;
    return func290(var864 - 1);
}

int func524(int var512) {
    if (var512 <= 0) return 1;
    return func524(var512 - 1);
}

int func615(int var375) {
    if (var375 <= 0) return 1;
    return 46;
}

int func520(int var386) {
    if (var386 <= 0) return 1;
    return 16;
}


int main() {
    int var589 = 0;
    while (var589 < 19) {
        var589 += 5;
        var589++;
    }    int var214 = 0;
    while (var214 < 19) {
        var214 += 3;
        var214++;
    }    for (int var469 = 0; var469 < 15; var469++) {
        var469 += 4;
    }    int var295 = 0;
    while (var295 < 17) {
        var295 += 3;
        var295++;
    }

    int var24 = 86;
    if (var24 % 2 == 0) {
        printf("var24 is even\n");
    } else {
        printf("var24 is odd\n");
    }

    int var317 = 72;
    if (var317 % 2 == 0) {
        printf("var317 is even\n");
    } else {
        printf("var317 is odd\n");
    }

    return 0;
}
