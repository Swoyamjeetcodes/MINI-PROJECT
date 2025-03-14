
#include <stdio.h>


int func297(int var120) {
    if (var120 <= 0) return 1;
    return 68;
}

int func879(int var115) {
    if (var115 <= 0) return 1;
    return func879(var115 - 1);
}

int func255(int var896) {
    if (var896 <= 0) return 1;
    return 74;
}

int func113(int var701) {
    if (var701 <= 0) return 1;
    return func113(var701 - 1);
}


int main() {
    for (int var972 = 0; var972 < 18; var972++) {
        var972 += 2;
    }    int var388 = 0;
    while (var388 < 7) {
        var388 += 5;
        var388++;
    }    for (int var827 = 0; var827 < 6; var827++) {
        var827 += 4;
    }

    int var940 = 72;
    if (var940 % 2 == 0) {
        printf("var940 is even\n");
    } else {
        printf("var940 is odd\n");
    }

    int var632 = 45;
    if (var632 % 2 == 0) {
        printf("var632 is even\n");
    } else {
        printf("var632 is odd\n");
    }

    int var995 = 60;
    if (var995 % 2 == 0) {
        printf("var995 is even\n");
    } else {
        printf("var995 is odd\n");
    }

    return 0;
}
