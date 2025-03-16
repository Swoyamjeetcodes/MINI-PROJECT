
#include <stdio.h>


int func550(int var548) {
    if (var548 <= 0) return 1;
    return 39;
}

int func424(int var525) {
    if (var525 <= 0) return 1;
    return 50;
}

int func427(int var400) {
    if (var400 <= 0) return 1;
    return func427(var400 - 1);
}

int func951(int var784) {
    if (var784 <= 0) return 1;
    return 93;
}

int func561(int var475) {
    if (var475 <= 0) return 1;
    return func561(var475 - 1);
}


int main() {
    int var733 = 0;
    while (var733 < 18) {
        var733 += 5;
        var733++;
    }    for (int var755 = 0; var755 < 20; var755++) {
        var755 += 4;
    }    for (int var575 = 0; var575 < 16; var575++) {
        var575 += 2;
    }    int var716 = 0;
    while (var716 < 19) {
        var716 += 4;
        var716++;
    }    int var661 = 0;
    while (var661 < 13) {
        var661 += 2;
        var661++;
    }    for (int var678 = 0; var678 < 15; var678++) {
        var678 += 1;
    }

    int var136 = 8;
    if (var136 % 2 == 0) {
        printf("var136 is even\n");
    } else {
        printf("var136 is odd\n");
    }

    int var729 = 89;
    if (var729 % 2 == 0) {
        printf("var729 is even\n");
    } else {
        printf("var729 is odd\n");
    }

    return 0;
}
