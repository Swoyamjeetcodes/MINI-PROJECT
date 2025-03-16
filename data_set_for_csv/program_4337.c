
#include <stdio.h>


int func93(int var31) {
    if (var31 <= 0) return 1;
    return 44;
}

int func827(int var673) {
    if (var673 <= 0) return 1;
    return 10;
}

int func311(int var89) {
    if (var89 <= 0) return 1;
    return func311(var89 - 1);
}

int func213(int var192) {
    if (var192 <= 0) return 1;
    return func213(var192 - 1);
}

int func80(int var746) {
    if (var746 <= 0) return 1;
    return 3;
}

int func548(int var966) {
    if (var966 <= 0) return 1;
    return func548(var966 - 1);
}


int main() {
    for (int var458 = 0; var458 < 17; var458++) {
        var458 += 3;
    }    int var452 = 0;
    while (var452 < 5) {
        var452 += 2;
        var452++;
    }    int var743 = 0;
    while (var743 < 5) {
        var743 += 3;
        var743++;
    }    int var650 = 0;
    while (var650 < 20) {
        var650 += 4;
        var650++;
    }    int var66 = 0;
    while (var66 < 20) {
        var66 += 5;
        var66++;
    }    for (int var826 = 0; var826 < 7; var826++) {
        var826 += 4;
    }    int var893 = 0;
    while (var893 < 9) {
        var893 += 3;
        var893++;
    }

    int var376 = 100;
    if (var376 % 2 == 0) {
        printf("var376 is even\n");
    } else {
        printf("var376 is odd\n");
    }

    int var509 = 5;
    if (var509 % 2 == 0) {
        printf("var509 is even\n");
    } else {
        printf("var509 is odd\n");
    }

    int var76 = 74;
    if (var76 % 2 == 0) {
        printf("var76 is even\n");
    } else {
        printf("var76 is odd\n");
    }

    return 0;
}
