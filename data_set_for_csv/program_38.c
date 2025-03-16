
#include <stdio.h>


int func672(int var597) {
    if (var597 <= 0) return 1;
    return 68;
}

int func62(int var887) {
    if (var887 <= 0) return 1;
    return func62(var887 - 1);
}

int func568(int var549) {
    if (var549 <= 0) return 1;
    return func568(var549 - 1);
}

int func579(int var820) {
    if (var820 <= 0) return 1;
    return 17;
}


int main() {
    int var910 = 0;
    while (var910 < 15) {
        var910 += 2;
        var910++;
    }    for (int var16 = 0; var16 < 16; var16++) {
        var16 += 2;
    }    int var931 = 0;
    while (var931 < 11) {
        var931 += 4;
        var931++;
    }    int var864 = 0;
    while (var864 < 11) {
        var864 += 4;
        var864++;
    }    for (int var998 = 0; var998 < 5; var998++) {
        var998 += 2;
    }

    int var981 = 40;
    if (var981 % 2 == 0) {
        printf("var981 is even\n");
    } else {
        printf("var981 is odd\n");
    }

    int var900 = 92;
    if (var900 % 2 == 0) {
        printf("var900 is even\n");
    } else {
        printf("var900 is odd\n");
    }

    int var298 = 53;
    if (var298 % 2 == 0) {
        printf("var298 is even\n");
    } else {
        printf("var298 is odd\n");
    }

    return 0;
}
