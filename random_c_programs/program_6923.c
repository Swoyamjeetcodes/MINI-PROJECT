
#include <stdio.h>


int func157(int var867) {
    if (var867 <= 0) return 1;
    return func157(var867 - 1);
}

int func329(int var63) {
    if (var63 <= 0) return 1;
    return 55;
}

int func88(int var728) {
    if (var728 <= 0) return 1;
    return func88(var728 - 1);
}

int func200(int var248) {
    if (var248 <= 0) return 1;
    return func200(var248 - 1);
}

int func474(int var685) {
    if (var685 <= 0) return 1;
    return 50;
}


int main() {
    for (int var160 = 0; var160 < 9; var160++) {
        var160 += 2;
    }    for (int var810 = 0; var810 < 15; var810++) {
        var810 += 1;
    }    int var395 = 0;
    while (var395 < 14) {
        var395 += 5;
        var395++;
    }

    int var632 = 29;
    if (var632 % 2 == 0) {
        printf("var632 is even\n");
    } else {
        printf("var632 is odd\n");
    }

    int var220 = 35;
    if (var220 % 2 == 0) {
        printf("var220 is even\n");
    } else {
        printf("var220 is odd\n");
    }

    return 0;
}
