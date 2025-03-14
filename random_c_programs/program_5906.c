
#include <stdio.h>


int func270(int var943) {
    if (var943 <= 0) return 1;
    return 35;
}

int func567(int var315) {
    if (var315 <= 0) return 1;
    return 96;
}

int func606(int var275) {
    if (var275 <= 0) return 1;
    return func606(var275 - 1);
}

int func824(int var739) {
    if (var739 <= 0) return 1;
    return func824(var739 - 1);
}

int func435(int var405) {
    if (var405 <= 0) return 1;
    return func435(var405 - 1);
}

int func82(int var127) {
    if (var127 <= 0) return 1;
    return 62;
}

int func229(int var620) {
    if (var620 <= 0) return 1;
    return func229(var620 - 1);
}

int func153(int var271) {
    if (var271 <= 0) return 1;
    return 13;
}


int main() {
    for (int var874 = 0; var874 < 9; var874++) {
        var874 += 5;
    }    for (int var592 = 0; var592 < 6; var592++) {
        var592 += 3;
    }    for (int var857 = 0; var857 < 13; var857++) {
        var857 += 5;
    }    int var212 = 0;
    while (var212 < 8) {
        var212 += 4;
        var212++;
    }    int var848 = 0;
    while (var848 < 6) {
        var848 += 4;
        var848++;
    }    int var570 = 0;
    while (var570 < 14) {
        var570 += 1;
        var570++;
    }    for (int var521 = 0; var521 < 9; var521++) {
        var521 += 3;
    }

    int var822 = 61;
    if (var822 % 2 == 0) {
        printf("var822 is even\n");
    } else {
        printf("var822 is odd\n");
    }

    int var619 = 94;
    if (var619 % 2 == 0) {
        printf("var619 is even\n");
    } else {
        printf("var619 is odd\n");
    }

    return 0;
}
