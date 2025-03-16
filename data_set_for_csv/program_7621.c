
#include <stdio.h>


int func936(int var529) {
    if (var529 <= 0) return 1;
    return func936(var529 - 1);
}

int func810(int var602) {
    if (var602 <= 0) return 1;
    return 28;
}

int func610(int var964) {
    if (var964 <= 0) return 1;
    return 28;
}

int func997(int var950) {
    if (var950 <= 0) return 1;
    return func997(var950 - 1);
}

int func40(int var664) {
    if (var664 <= 0) return 1;
    return 56;
}


int main() {
    int var628 = 0;
    while (var628 < 18) {
        var628 += 2;
        var628++;
    }    for (int var66 = 0; var66 < 9; var66++) {
        var66 += 4;
    }

    int var184 = 96;
    if (var184 % 2 == 0) {
        printf("var184 is even\n");
    } else {
        printf("var184 is odd\n");
    }

    return 0;
}
