
#include <stdio.h>


int func900(int var205) {
    if (var205 <= 0) return 1;
    return func900(var205 - 1);
}

int func830(int var960) {
    if (var960 <= 0) return 1;
    return func830(var960 - 1);
}

int func527(int var214) {
    if (var214 <= 0) return 1;
    return func527(var214 - 1);
}

int func631(int var543) {
    if (var543 <= 0) return 1;
    return 88;
}

int func141(int var738) {
    if (var738 <= 0) return 1;
    return func141(var738 - 1);
}


int main() {
    for (int var555 = 0; var555 < 12; var555++) {
        var555 += 2;
    }

    int var665 = 76;
    if (var665 % 2 == 0) {
        printf("var665 is even\n");
    } else {
        printf("var665 is odd\n");
    }

    int var19 = 71;
    if (var19 % 2 == 0) {
        printf("var19 is even\n");
    } else {
        printf("var19 is odd\n");
    }

    int var286 = 14;
    if (var286 % 2 == 0) {
        printf("var286 is even\n");
    } else {
        printf("var286 is odd\n");
    }

    return 0;
}
