
#include <stdio.h>


int func526(int var88) {
    if (var88 <= 0) return 1;
    return 32;
}

int func622(int var372) {
    if (var372 <= 0) return 1;
    return 45;
}

int func936(int var153) {
    if (var153 <= 0) return 1;
    return 72;
}

int func686(int var411) {
    if (var411 <= 0) return 1;
    return func686(var411 - 1);
}


int main() {
    for (int var778 = 0; var778 < 12; var778++) {
        var778 += 2;
    }    int var942 = 0;
    while (var942 < 9) {
        var942 += 3;
        var942++;
    }    int var483 = 0;
    while (var483 < 19) {
        var483 += 2;
        var483++;
    }

    int var630 = 2;
    if (var630 % 2 == 0) {
        printf("var630 is even\n");
    } else {
        printf("var630 is odd\n");
    }

    int var42 = 73;
    if (var42 % 2 == 0) {
        printf("var42 is even\n");
    } else {
        printf("var42 is odd\n");
    }

    return 0;
}
