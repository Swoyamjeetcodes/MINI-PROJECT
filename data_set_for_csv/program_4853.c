
#include <stdio.h>


int func554(int var836) {
    if (var836 <= 0) return 1;
    return 30;
}

int func270(int var332) {
    if (var332 <= 0) return 1;
    return func270(var332 - 1);
}

int func593(int var426) {
    if (var426 <= 0) return 1;
    return 92;
}

int func702(int var380) {
    if (var380 <= 0) return 1;
    return 89;
}

int func314(int var369) {
    if (var369 <= 0) return 1;
    return 88;
}

int func645(int var592) {
    if (var592 <= 0) return 1;
    return func645(var592 - 1);
}

int func354(int var569) {
    if (var569 <= 0) return 1;
    return func354(var569 - 1);
}

int func358(int var474) {
    if (var474 <= 0) return 1;
    return func358(var474 - 1);
}


int main() {
    for (int var695 = 0; var695 < 14; var695++) {
        var695 += 3;
    }    for (int var73 = 0; var73 < 13; var73++) {
        var73 += 4;
    }    int var50 = 0;
    while (var50 < 18) {
        var50 += 2;
        var50++;
    }    for (int var805 = 0; var805 < 5; var805++) {
        var805 += 4;
    }    int var528 = 0;
    while (var528 < 12) {
        var528 += 5;
        var528++;
    }

    int var846 = 50;
    if (var846 % 2 == 0) {
        printf("var846 is even\n");
    } else {
        printf("var846 is odd\n");
    }

    return 0;
}
