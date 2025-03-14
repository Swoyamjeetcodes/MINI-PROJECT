
#include <stdio.h>


int func307(int var792) {
    if (var792 <= 0) return 1;
    return func307(var792 - 1);
}

int func133(int var487) {
    if (var487 <= 0) return 1;
    return 10;
}

int func963(int var271) {
    if (var271 <= 0) return 1;
    return func963(var271 - 1);
}


int main() {
    for (int var598 = 0; var598 < 16; var598++) {
        var598 += 5;
    }    for (int var154 = 0; var154 < 19; var154++) {
        var154 += 2;
    }    for (int var888 = 0; var888 < 5; var888++) {
        var888 += 1;
    }    int var913 = 0;
    while (var913 < 17) {
        var913 += 4;
        var913++;
    }    for (int var536 = 0; var536 < 16; var536++) {
        var536 += 1;
    }

    int var993 = 19;
    if (var993 % 2 == 0) {
        printf("var993 is even\n");
    } else {
        printf("var993 is odd\n");
    }

    int var728 = 57;
    if (var728 % 2 == 0) {
        printf("var728 is even\n");
    } else {
        printf("var728 is odd\n");
    }

    int var88 = 0;
    if (var88 % 2 == 0) {
        printf("var88 is even\n");
    } else {
        printf("var88 is odd\n");
    }

    return 0;
}
