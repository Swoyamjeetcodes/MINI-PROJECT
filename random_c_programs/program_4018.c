
#include <stdio.h>


int func631(int var544) {
    if (var544 <= 0) return 1;
    return func631(var544 - 1);
}

int func382(int var17) {
    if (var17 <= 0) return 1;
    return func382(var17 - 1);
}

int func828(int var341) {
    if (var341 <= 0) return 1;
    return 90;
}

int func298(int var638) {
    if (var638 <= 0) return 1;
    return 5;
}

int func151(int var23) {
    if (var23 <= 0) return 1;
    return func151(var23 - 1);
}

int func492(int var458) {
    if (var458 <= 0) return 1;
    return 5;
}

int func761(int var643) {
    if (var643 <= 0) return 1;
    return func761(var643 - 1);
}

int func966(int var635) {
    if (var635 <= 0) return 1;
    return func966(var635 - 1);
}


int main() {
    for (int var37 = 0; var37 < 20; var37++) {
        var37 += 4;
    }    for (int var453 = 0; var453 < 5; var453++) {
        var453 += 1;
    }    int var622 = 0;
    while (var622 < 20) {
        var622 += 1;
        var622++;
    }    int var302 = 0;
    while (var302 < 11) {
        var302 += 2;
        var302++;
    }    int var155 = 0;
    while (var155 < 19) {
        var155 += 5;
        var155++;
    }    int var901 = 0;
    while (var901 < 10) {
        var901 += 2;
        var901++;
    }

    int var972 = 60;
    if (var972 % 2 == 0) {
        printf("var972 is even\n");
    } else {
        printf("var972 is odd\n");
    }

    int var813 = 38;
    if (var813 % 2 == 0) {
        printf("var813 is even\n");
    } else {
        printf("var813 is odd\n");
    }

    return 0;
}
