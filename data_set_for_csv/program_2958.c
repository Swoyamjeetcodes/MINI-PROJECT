
#include <stdio.h>


int func276(int var856) {
    if (var856 <= 0) return 1;
    return 98;
}

int func362(int var945) {
    if (var945 <= 0) return 1;
    return func362(var945 - 1);
}

int func979(int var782) {
    if (var782 <= 0) return 1;
    return func979(var782 - 1);
}

int func941(int var193) {
    if (var193 <= 0) return 1;
    return 30;
}

int func869(int var758) {
    if (var758 <= 0) return 1;
    return 28;
}


int main() {
    for (int var939 = 0; var939 < 7; var939++) {
        var939 += 3;
    }    for (int var982 = 0; var982 < 14; var982++) {
        var982 += 5;
    }    for (int var410 = 0; var410 < 13; var410++) {
        var410 += 2;
    }

    int var584 = 33;
    if (var584 % 2 == 0) {
        printf("var584 is even\n");
    } else {
        printf("var584 is odd\n");
    }

    return 0;
}
