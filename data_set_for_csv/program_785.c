
#include <stdio.h>


int func250(int var83) {
    if (var83 <= 0) return 1;
    return 16;
}

int func692(int var524) {
    if (var524 <= 0) return 1;
    return func692(var524 - 1);
}

int func733(int var731) {
    if (var731 <= 0) return 1;
    return 37;
}

int func178(int var288) {
    if (var288 <= 0) return 1;
    return 57;
}

int func644(int var16) {
    if (var16 <= 0) return 1;
    return func644(var16 - 1);
}

int func301(int var712) {
    if (var712 <= 0) return 1;
    return 71;
}

int func880(int var353) {
    if (var353 <= 0) return 1;
    return func880(var353 - 1);
}

int func196(int var313) {
    if (var313 <= 0) return 1;
    return func196(var313 - 1);
}


int main() {
    int var929 = 0;
    while (var929 < 5) {
        var929 += 5;
        var929++;
    }    for (int var378 = 0; var378 < 10; var378++) {
        var378 += 1;
    }    for (int var564 = 0; var564 < 12; var564++) {
        var564 += 3;
    }    int var22 = 0;
    while (var22 < 13) {
        var22 += 2;
        var22++;
    }    for (int var845 = 0; var845 < 16; var845++) {
        var845 += 4;
    }    for (int var951 = 0; var951 < 7; var951++) {
        var951 += 3;
    }    for (int var304 = 0; var304 < 16; var304++) {
        var304 += 4;
    }

    int var536 = 23;
    if (var536 % 2 == 0) {
        printf("var536 is even\n");
    } else {
        printf("var536 is odd\n");
    }

    return 0;
}
