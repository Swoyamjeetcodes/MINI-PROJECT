
#include <stdio.h>


int func322(int var252) {
    if (var252 <= 0) return 1;
    return 68;
}

int func655(int var774) {
    if (var774 <= 0) return 1;
    return func655(var774 - 1);
}

int func13(int var780) {
    if (var780 <= 0) return 1;
    return func13(var780 - 1);
}

int func59(int var510) {
    if (var510 <= 0) return 1;
    return 81;
}

int func189(int var676) {
    if (var676 <= 0) return 1;
    return 83;
}


int main() {
    int var487 = 0;
    while (var487 < 19) {
        var487 += 3;
        var487++;
    }    int var162 = 0;
    while (var162 < 9) {
        var162 += 4;
        var162++;
    }

    int var877 = 52;
    if (var877 % 2 == 0) {
        printf("var877 is even\n");
    } else {
        printf("var877 is odd\n");
    }

    int var98 = 90;
    if (var98 % 2 == 0) {
        printf("var98 is even\n");
    } else {
        printf("var98 is odd\n");
    }

    int var580 = 56;
    if (var580 % 2 == 0) {
        printf("var580 is even\n");
    } else {
        printf("var580 is odd\n");
    }

    return 0;
}
