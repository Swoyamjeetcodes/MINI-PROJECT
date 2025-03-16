
#include <stdio.h>


int func990(int var676) {
    if (var676 <= 0) return 1;
    return func990(var676 - 1);
}


int main() {
    for (int var205 = 0; var205 < 12; var205++) {
        var205 += 4;
    }

    int var893 = 92;
    if (var893 % 2 == 0) {
        printf("var893 is even\n");
    } else {
        printf("var893 is odd\n");
    }

    int var67 = 16;
    if (var67 % 2 == 0) {
        printf("var67 is even\n");
    } else {
        printf("var67 is odd\n");
    }

    int var352 = 32;
    if (var352 % 2 == 0) {
        printf("var352 is even\n");
    } else {
        printf("var352 is odd\n");
    }

    return 0;
}
