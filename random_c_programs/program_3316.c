
#include <stdio.h>


int func183(int var81) {
    if (var81 <= 0) return 1;
    return func183(var81 - 1);
}

int func829(int var878) {
    if (var878 <= 0) return 1;
    return func829(var878 - 1);
}

int func818(int var190) {
    if (var190 <= 0) return 1;
    return func818(var190 - 1);
}

int func69(int var204) {
    if (var204 <= 0) return 1;
    return func69(var204 - 1);
}

int func810(int var743) {
    if (var743 <= 0) return 1;
    return func810(var743 - 1);
}


int main() {
    for (int var103 = 0; var103 < 6; var103++) {
        var103 += 1;
    }    int var414 = 0;
    while (var414 < 17) {
        var414 += 5;
        var414++;
    }    int var508 = 0;
    while (var508 < 14) {
        var508 += 4;
        var508++;
    }

    int var732 = 94;
    if (var732 % 2 == 0) {
        printf("var732 is even\n");
    } else {
        printf("var732 is odd\n");
    }

    int var231 = 56;
    if (var231 % 2 == 0) {
        printf("var231 is even\n");
    } else {
        printf("var231 is odd\n");
    }

    int var498 = 40;
    if (var498 % 2 == 0) {
        printf("var498 is even\n");
    } else {
        printf("var498 is odd\n");
    }

    return 0;
}
