
#include <stdio.h>


int func826(int var689) {
    if (var689 <= 0) return 1;
    return 28;
}

int func767(int var816) {
    if (var816 <= 0) return 1;
    return func767(var816 - 1);
}

int func258(int var356) {
    if (var356 <= 0) return 1;
    return 14;
}


int main() {
    for (int var109 = 0; var109 < 17; var109++) {
        var109 += 5;
    }    int var28 = 0;
    while (var28 < 5) {
        var28 += 1;
        var28++;
    }    int var534 = 0;
    while (var534 < 16) {
        var534 += 2;
        var534++;
    }

    int var727 = 55;
    if (var727 % 2 == 0) {
        printf("var727 is even\n");
    } else {
        printf("var727 is odd\n");
    }

    int var911 = 96;
    if (var911 % 2 == 0) {
        printf("var911 is even\n");
    } else {
        printf("var911 is odd\n");
    }

    int var892 = 43;
    if (var892 % 2 == 0) {
        printf("var892 is even\n");
    } else {
        printf("var892 is odd\n");
    }

    return 0;
}
