
#include <stdio.h>


int func409(int var427) {
    if (var427 <= 0) return 1;
    return func409(var427 - 1);
}

int func10(int var215) {
    if (var215 <= 0) return 1;
    return func10(var215 - 1);
}

int func435(int var945) {
    if (var945 <= 0) return 1;
    return 29;
}

int func484(int var937) {
    if (var937 <= 0) return 1;
    return 27;
}

int func442(int var433) {
    if (var433 <= 0) return 1;
    return func442(var433 - 1);
}


int main() {
    int var622 = 0;
    while (var622 < 12) {
        var622 += 3;
        var622++;
    }    for (int var156 = 0; var156 < 16; var156++) {
        var156 += 2;
    }    int var795 = 0;
    while (var795 < 14) {
        var795 += 1;
        var795++;
    }    for (int var942 = 0; var942 < 15; var942++) {
        var942 += 2;
    }

    int var567 = 48;
    if (var567 % 2 == 0) {
        printf("var567 is even\n");
    } else {
        printf("var567 is odd\n");
    }

    int var459 = 62;
    if (var459 % 2 == 0) {
        printf("var459 is even\n");
    } else {
        printf("var459 is odd\n");
    }

    return 0;
}
