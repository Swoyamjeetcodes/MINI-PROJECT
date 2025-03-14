
#include <stdio.h>


int func783(int var690) {
    if (var690 <= 0) return 1;
    return 79;
}

int func886(int var711) {
    if (var711 <= 0) return 1;
    return 11;
}

int func220(int var309) {
    if (var309 <= 0) return 1;
    return 14;
}

int func891(int var365) {
    if (var365 <= 0) return 1;
    return func891(var365 - 1);
}

int func923(int var817) {
    if (var817 <= 0) return 1;
    return 56;
}

int func463(int var265) {
    if (var265 <= 0) return 1;
    return func463(var265 - 1);
}

int func829(int var812) {
    if (var812 <= 0) return 1;
    return func829(var812 - 1);
}


int main() {
    for (int var319 = 0; var319 < 6; var319++) {
        var319 += 2;
    }    for (int var801 = 0; var801 < 15; var801++) {
        var801 += 4;
    }

    int var224 = 93;
    if (var224 % 2 == 0) {
        printf("var224 is even\n");
    } else {
        printf("var224 is odd\n");
    }

    return 0;
}
