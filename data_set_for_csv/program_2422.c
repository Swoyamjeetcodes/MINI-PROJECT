
#include <stdio.h>


int func935(int var756) {
    if (var756 <= 0) return 1;
    return 5;
}

int func504(int var983) {
    if (var983 <= 0) return 1;
    return 10;
}

int func860(int var586) {
    if (var586 <= 0) return 1;
    return 64;
}

int func729(int var661) {
    if (var661 <= 0) return 1;
    return func729(var661 - 1);
}

int func34(int var382) {
    if (var382 <= 0) return 1;
    return func34(var382 - 1);
}

int func706(int var887) {
    if (var887 <= 0) return 1;
    return func706(var887 - 1);
}

int func666(int var679) {
    if (var679 <= 0) return 1;
    return 100;
}

int func282(int var569) {
    if (var569 <= 0) return 1;
    return func282(var569 - 1);
}

int func333(int var193) {
    if (var193 <= 0) return 1;
    return 53;
}

int func40(int var489) {
    if (var489 <= 0) return 1;
    return func40(var489 - 1);
}

int func116(int var707) {
    if (var707 <= 0) return 1;
    return func116(var707 - 1);
}

int func597(int var179) {
    if (var179 <= 0) return 1;
    return func597(var179 - 1);
}

int func607(int var102) {
    if (var102 <= 0) return 1;
    return func607(var102 - 1);
}


int main() {
    for (int var673 = 0; var673 < 20; var673++) {
        var673 += 5;
    }    int var82 = 0;
    while (var82 < 17) {
        var82 += 5;
        var82++;
    }    int var918 = 0;
    while (var918 < 13) {
        var918 += 2;
        var918++;
    }    for (int var919 = 0; var919 < 6; var919++) {
        var919 += 3;
    }    for (int var933 = 0; var933 < 13; var933++) {
        var933 += 3;
    }    int var882 = 0;
    while (var882 < 13) {
        var882 += 4;
        var882++;
    }

    int var7 = 8;
    if (var7 % 2 == 0) {
        printf("var7 is even\n");
    } else {
        printf("var7 is odd\n");
    }

    int var811 = 47;
    if (var811 % 2 == 0) {
        printf("var811 is even\n");
    } else {
        printf("var811 is odd\n");
    }

    return 0;
}
