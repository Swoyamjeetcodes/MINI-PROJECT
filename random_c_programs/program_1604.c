
#include <stdio.h>


int func876(int var409) {
    if (var409 <= 0) return 1;
    return func876(var409 - 1);
}

int func351(int var170) {
    if (var170 <= 0) return 1;
    return func351(var170 - 1);
}

int func287(int var691) {
    if (var691 <= 0) return 1;
    return 5;
}

int func954(int var204) {
    if (var204 <= 0) return 1;
    return 84;
}

int func358(int var824) {
    if (var824 <= 0) return 1;
    return 40;
}


int main() {
    int var964 = 0;
    while (var964 < 14) {
        var964 += 3;
        var964++;
    }    for (int var178 = 0; var178 < 5; var178++) {
        var178 += 5;
    }    for (int var934 = 0; var934 < 12; var934++) {
        var934 += 1;
    }    for (int var244 = 0; var244 < 8; var244++) {
        var244 += 5;
    }

    int var180 = 21;
    if (var180 % 2 == 0) {
        printf("var180 is even\n");
    } else {
        printf("var180 is odd\n");
    }

    int var640 = 60;
    if (var640 % 2 == 0) {
        printf("var640 is even\n");
    } else {
        printf("var640 is odd\n");
    }

    return 0;
}
