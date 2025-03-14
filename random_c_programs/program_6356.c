
#include <stdio.h>


int func864(int var672) {
    if (var672 <= 0) return 1;
    return func864(var672 - 1);
}

int func820(int var627) {
    if (var627 <= 0) return 1;
    return func820(var627 - 1);
}

int func578(int var301) {
    if (var301 <= 0) return 1;
    return func578(var301 - 1);
}

int func574(int var36) {
    if (var36 <= 0) return 1;
    return 32;
}

int func380(int var528) {
    if (var528 <= 0) return 1;
    return func380(var528 - 1);
}


int main() {
    for (int var797 = 0; var797 < 11; var797++) {
        var797 += 1;
    }

    int var433 = 63;
    if (var433 % 2 == 0) {
        printf("var433 is even\n");
    } else {
        printf("var433 is odd\n");
    }

    int var653 = 81;
    if (var653 % 2 == 0) {
        printf("var653 is even\n");
    } else {
        printf("var653 is odd\n");
    }

    return 0;
}
