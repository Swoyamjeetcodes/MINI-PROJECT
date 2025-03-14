
#include <stdio.h>


int func331(int var497) {
    if (var497 <= 0) return 1;
    return 15;
}

int func427(int var483) {
    if (var483 <= 0) return 1;
    return 76;
}

int func260(int var932) {
    if (var932 <= 0) return 1;
    return func260(var932 - 1);
}

int func389(int var68) {
    if (var68 <= 0) return 1;
    return 41;
}


int main() {
    for (int var732 = 0; var732 < 15; var732++) {
        var732 += 3;
    }

    int var506 = 64;
    if (var506 % 2 == 0) {
        printf("var506 is even\n");
    } else {
        printf("var506 is odd\n");
    }

    int var937 = 88;
    if (var937 % 2 == 0) {
        printf("var937 is even\n");
    } else {
        printf("var937 is odd\n");
    }

    int var780 = 47;
    if (var780 % 2 == 0) {
        printf("var780 is even\n");
    } else {
        printf("var780 is odd\n");
    }

    return 0;
}
