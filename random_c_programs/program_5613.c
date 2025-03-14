
#include <stdio.h>


int func808(int var978) {
    if (var978 <= 0) return 1;
    return 83;
}

int func249(int var185) {
    if (var185 <= 0) return 1;
    return 93;
}

int func545(int var559) {
    if (var559 <= 0) return 1;
    return func545(var559 - 1);
}

int func215(int var314) {
    if (var314 <= 0) return 1;
    return func215(var314 - 1);
}

int func755(int var83) {
    if (var83 <= 0) return 1;
    return func755(var83 - 1);
}


int main() {
    for (int var321 = 0; var321 < 13; var321++) {
        var321 += 2;
    }    int var960 = 0;
    while (var960 < 17) {
        var960 += 4;
        var960++;
    }

    int var379 = 72;
    if (var379 % 2 == 0) {
        printf("var379 is even\n");
    } else {
        printf("var379 is odd\n");
    }

    return 0;
}
