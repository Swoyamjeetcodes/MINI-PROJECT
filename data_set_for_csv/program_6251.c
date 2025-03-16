
#include <stdio.h>


int func204(int var482) {
    if (var482 <= 0) return 1;
    return 53;
}

int func956(int var146) {
    if (var146 <= 0) return 1;
    return func956(var146 - 1);
}

int func567(int var787) {
    if (var787 <= 0) return 1;
    return 51;
}

int func360(int var643) {
    if (var643 <= 0) return 1;
    return 82;
}

int func438(int var169) {
    if (var169 <= 0) return 1;
    return func438(var169 - 1);
}


int main() {
    int var647 = 0;
    while (var647 < 16) {
        var647 += 1;
        var647++;
    }    for (int var327 = 0; var327 < 16; var327++) {
        var327 += 2;
    }    for (int var929 = 0; var929 < 7; var929++) {
        var929 += 1;
    }

    int var250 = 49;
    if (var250 % 2 == 0) {
        printf("var250 is even\n");
    } else {
        printf("var250 is odd\n");
    }

    return 0;
}
