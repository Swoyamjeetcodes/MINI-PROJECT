
#include <stdio.h>


int func183(int var52) {
    if (var52 <= 0) return 1;
    return 40;
}

int func945(int var671) {
    if (var671 <= 0) return 1;
    return func945(var671 - 1);
}

int func887(int var80) {
    if (var80 <= 0) return 1;
    return func887(var80 - 1);
}

int func693(int var783) {
    if (var783 <= 0) return 1;
    return 14;
}

int func386(int var645) {
    if (var645 <= 0) return 1;
    return 79;
}


int main() {
    int var513 = 0;
    while (var513 < 20) {
        var513 += 3;
        var513++;
    }    int var832 = 0;
    while (var832 < 16) {
        var832 += 5;
        var832++;
    }    int var188 = 0;
    while (var188 < 6) {
        var188 += 4;
        var188++;
    }    int var920 = 0;
    while (var920 < 12) {
        var920 += 4;
        var920++;
    }

    int var831 = 91;
    if (var831 % 2 == 0) {
        printf("var831 is even\n");
    } else {
        printf("var831 is odd\n");
    }

    int var971 = 91;
    if (var971 % 2 == 0) {
        printf("var971 is even\n");
    } else {
        printf("var971 is odd\n");
    }

    return 0;
}
