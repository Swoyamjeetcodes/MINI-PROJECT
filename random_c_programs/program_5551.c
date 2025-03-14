
#include <stdio.h>


int func223(int var386) {
    if (var386 <= 0) return 1;
    return func223(var386 - 1);
}

int func864(int var359) {
    if (var359 <= 0) return 1;
    return 40;
}

int func192(int var11) {
    if (var11 <= 0) return 1;
    return func192(var11 - 1);
}

int func466(int var780) {
    if (var780 <= 0) return 1;
    return 95;
}


int main() {
    int var19 = 0;
    while (var19 < 16) {
        var19 += 2;
        var19++;
    }    int var266 = 0;
    while (var266 < 11) {
        var266 += 3;
        var266++;
    }    int var560 = 0;
    while (var560 < 12) {
        var560 += 4;
        var560++;
    }

    int var916 = 80;
    if (var916 % 2 == 0) {
        printf("var916 is even\n");
    } else {
        printf("var916 is odd\n");
    }

    int var700 = 19;
    if (var700 % 2 == 0) {
        printf("var700 is even\n");
    } else {
        printf("var700 is odd\n");
    }

    return 0;
}
