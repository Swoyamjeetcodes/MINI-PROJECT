
#include <stdio.h>


int func816(int var41) {
    if (var41 <= 0) return 1;
    return 45;
}

int func107(int var211) {
    if (var211 <= 0) return 1;
    return 17;
}

int func880(int var701) {
    if (var701 <= 0) return 1;
    return 70;
}

int func676(int var338) {
    if (var338 <= 0) return 1;
    return func676(var338 - 1);
}

int func337(int var744) {
    if (var744 <= 0) return 1;
    return func337(var744 - 1);
}

int func516(int var312) {
    if (var312 <= 0) return 1;
    return func516(var312 - 1);
}


int main() {
    int var79 = 0;
    while (var79 < 17) {
        var79 += 2;
        var79++;
    }    int var180 = 0;
    while (var180 < 16) {
        var180 += 1;
        var180++;
    }    int var419 = 0;
    while (var419 < 14) {
        var419 += 1;
        var419++;
    }    int var732 = 0;
    while (var732 < 11) {
        var732 += 1;
        var732++;
    }    int var966 = 0;
    while (var966 < 16) {
        var966 += 5;
        var966++;
    }    for (int var155 = 0; var155 < 17; var155++) {
        var155 += 3;
    }

    int var602 = 81;
    if (var602 % 2 == 0) {
        printf("var602 is even\n");
    } else {
        printf("var602 is odd\n");
    }

    return 0;
}
