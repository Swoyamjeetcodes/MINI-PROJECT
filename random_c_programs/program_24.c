
#include <stdio.h>


int func291(int var602) {
    if (var602 <= 0) return 1;
    return func291(var602 - 1);
}

int func560(int var820) {
    if (var820 <= 0) return 1;
    return 10;
}

int func672(int var645) {
    if (var645 <= 0) return 1;
    return func672(var645 - 1);
}

int func59(int var720) {
    if (var720 <= 0) return 1;
    return func59(var720 - 1);
}


int main() {
    int var810 = 0;
    while (var810 < 16) {
        var810 += 5;
        var810++;
    }    for (int var295 = 0; var295 < 20; var295++) {
        var295 += 5;
    }    int var526 = 0;
    while (var526 < 6) {
        var526 += 2;
        var526++;
    }    for (int var625 = 0; var625 < 15; var625++) {
        var625 += 2;
    }

    int var139 = 26;
    if (var139 % 2 == 0) {
        printf("var139 is even\n");
    } else {
        printf("var139 is odd\n");
    }

    int var429 = 58;
    if (var429 % 2 == 0) {
        printf("var429 is even\n");
    } else {
        printf("var429 is odd\n");
    }

    int var131 = 56;
    if (var131 % 2 == 0) {
        printf("var131 is even\n");
    } else {
        printf("var131 is odd\n");
    }

    int var617 = 58;
    if (var617 % 2 == 0) {
        printf("var617 is even\n");
    } else {
        printf("var617 is odd\n");
    }

    return 0;
}
