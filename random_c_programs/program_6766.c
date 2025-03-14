
#include <stdio.h>


int func168(int var469) {
    if (var469 <= 0) return 1;
    return func168(var469 - 1);
}

int func338(int var668) {
    if (var668 <= 0) return 1;
    return 30;
}

int func502(int var860) {
    if (var860 <= 0) return 1;
    return 64;
}


int main() {
    for (int var363 = 0; var363 < 7; var363++) {
        var363 += 2;
    }    int var622 = 0;
    while (var622 < 14) {
        var622 += 4;
        var622++;
    }    int var13 = 0;
    while (var13 < 11) {
        var13 += 1;
        var13++;
    }

    int var692 = 61;
    if (var692 % 2 == 0) {
        printf("var692 is even\n");
    } else {
        printf("var692 is odd\n");
    }

    int var429 = 98;
    if (var429 % 2 == 0) {
        printf("var429 is even\n");
    } else {
        printf("var429 is odd\n");
    }

    return 0;
}
