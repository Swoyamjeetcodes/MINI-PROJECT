
#include <stdio.h>


int func4(int var663) {
    if (var663 <= 0) return 1;
    return func4(var663 - 1);
}

int func858(int var174) {
    if (var174 <= 0) return 1;
    return 48;
}

int func613(int var195) {
    if (var195 <= 0) return 1;
    return func613(var195 - 1);
}

int func546(int var247) {
    if (var247 <= 0) return 1;
    return 54;
}

int func968(int var211) {
    if (var211 <= 0) return 1;
    return func968(var211 - 1);
}


int main() {
    int var948 = 0;
    while (var948 < 20) {
        var948 += 5;
        var948++;
    }    for (int var438 = 0; var438 < 20; var438++) {
        var438 += 1;
    }    for (int var362 = 0; var362 < 16; var362++) {
        var362 += 1;
    }    for (int var517 = 0; var517 < 6; var517++) {
        var517 += 5;
    }    int var94 = 0;
    while (var94 < 15) {
        var94 += 2;
        var94++;
    }

    int var701 = 85;
    if (var701 % 2 == 0) {
        printf("var701 is even\n");
    } else {
        printf("var701 is odd\n");
    }

    return 0;
}
