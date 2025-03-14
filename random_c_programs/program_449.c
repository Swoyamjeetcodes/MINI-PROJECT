
#include <stdio.h>


int func812(int var607) {
    if (var607 <= 0) return 1;
    return 92;
}

int func32(int var640) {
    if (var640 <= 0) return 1;
    return func32(var640 - 1);
}

int func117(int var442) {
    if (var442 <= 0) return 1;
    return 1;
}


int main() {
    for (int var89 = 0; var89 < 16; var89++) {
        var89 += 2;
    }    for (int var158 = 0; var158 < 9; var158++) {
        var158 += 1;
    }    for (int var195 = 0; var195 < 18; var195++) {
        var195 += 2;
    }

    int var565 = 99;
    if (var565 % 2 == 0) {
        printf("var565 is even\n");
    } else {
        printf("var565 is odd\n");
    }

    int var20 = 26;
    if (var20 % 2 == 0) {
        printf("var20 is even\n");
    } else {
        printf("var20 is odd\n");
    }

    int var146 = 31;
    if (var146 % 2 == 0) {
        printf("var146 is even\n");
    } else {
        printf("var146 is odd\n");
    }

    return 0;
}
