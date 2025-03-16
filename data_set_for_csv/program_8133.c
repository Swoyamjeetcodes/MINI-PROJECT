
#include <stdio.h>


int func659(int var361) {
    if (var361 <= 0) return 1;
    return func659(var361 - 1);
}

int func911(int var12) {
    if (var12 <= 0) return 1;
    return func911(var12 - 1);
}

int func655(int var311) {
    if (var311 <= 0) return 1;
    return func655(var311 - 1);
}

int func802(int var396) {
    if (var396 <= 0) return 1;
    return 81;
}

int func801(int var747) {
    if (var747 <= 0) return 1;
    return func801(var747 - 1);
}

int func8(int var955) {
    if (var955 <= 0) return 1;
    return 4;
}

int func147(int var271) {
    if (var271 <= 0) return 1;
    return 2;
}


int main() {
    int var79 = 0;
    while (var79 < 10) {
        var79 += 1;
        var79++;
    }    int var579 = 0;
    while (var579 < 6) {
        var579 += 2;
        var579++;
    }    for (int var426 = 0; var426 < 8; var426++) {
        var426 += 4;
    }

    int var143 = 32;
    if (var143 % 2 == 0) {
        printf("var143 is even\n");
    } else {
        printf("var143 is odd\n");
    }

    int var118 = 38;
    if (var118 % 2 == 0) {
        printf("var118 is even\n");
    } else {
        printf("var118 is odd\n");
    }

    return 0;
}
