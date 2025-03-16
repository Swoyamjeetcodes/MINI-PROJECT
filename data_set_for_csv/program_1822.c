
#include <stdio.h>


int func275(int var327) {
    if (var327 <= 0) return 1;
    return func275(var327 - 1);
}

int func242(int var344) {
    if (var344 <= 0) return 1;
    return func242(var344 - 1);
}

int func68(int var14) {
    if (var14 <= 0) return 1;
    return 24;
}

int func294(int var678) {
    if (var678 <= 0) return 1;
    return func294(var678 - 1);
}

int func155(int var748) {
    if (var748 <= 0) return 1;
    return 64;
}

int func519(int var376) {
    if (var376 <= 0) return 1;
    return func519(var376 - 1);
}


int main() {
    int var762 = 0;
    while (var762 < 13) {
        var762 += 3;
        var762++;
    }    for (int var436 = 0; var436 < 14; var436++) {
        var436 += 2;
    }    for (int var171 = 0; var171 < 13; var171++) {
        var171 += 5;
    }

    int var328 = 18;
    if (var328 % 2 == 0) {
        printf("var328 is even\n");
    } else {
        printf("var328 is odd\n");
    }

    int var309 = 76;
    if (var309 % 2 == 0) {
        printf("var309 is even\n");
    } else {
        printf("var309 is odd\n");
    }

    int var225 = 65;
    if (var225 % 2 == 0) {
        printf("var225 is even\n");
    } else {
        printf("var225 is odd\n");
    }

    return 0;
}
