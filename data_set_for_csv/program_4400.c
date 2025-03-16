
#include <stdio.h>


int func456(int var982) {
    if (var982 <= 0) return 1;
    return 34;
}

int func329(int var708) {
    if (var708 <= 0) return 1;
    return func329(var708 - 1);
}

int func879(int var384) {
    if (var384 <= 0) return 1;
    return func879(var384 - 1);
}


int main() {
    for (int var51 = 0; var51 < 19; var51++) {
        var51 += 1;
    }    for (int var522 = 0; var522 < 13; var522++) {
        var522 += 1;
    }    for (int var120 = 0; var120 < 9; var120++) {
        var120 += 3;
    }

    int var369 = 35;
    if (var369 % 2 == 0) {
        printf("var369 is even\n");
    } else {
        printf("var369 is odd\n");
    }

    int var109 = 88;
    if (var109 % 2 == 0) {
        printf("var109 is even\n");
    } else {
        printf("var109 is odd\n");
    }

    int var144 = 46;
    if (var144 % 2 == 0) {
        printf("var144 is even\n");
    } else {
        printf("var144 is odd\n");
    }

    return 0;
}
