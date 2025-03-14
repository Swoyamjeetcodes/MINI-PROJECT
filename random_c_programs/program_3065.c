
#include <stdio.h>


int func880(int var742) {
    if (var742 <= 0) return 1;
    return func880(var742 - 1);
}

int func328(int var558) {
    if (var558 <= 0) return 1;
    return func328(var558 - 1);
}

int func539(int var369) {
    if (var369 <= 0) return 1;
    return 82;
}

int func380(int var189) {
    if (var189 <= 0) return 1;
    return func380(var189 - 1);
}


int main() {
    int var104 = 0;
    while (var104 < 13) {
        var104 += 1;
        var104++;
    }    int var89 = 0;
    while (var89 < 9) {
        var89 += 5;
        var89++;
    }    for (int var797 = 0; var797 < 12; var797++) {
        var797 += 2;
    }

    int var127 = 32;
    if (var127 % 2 == 0) {
        printf("var127 is even\n");
    } else {
        printf("var127 is odd\n");
    }

    int var889 = 96;
    if (var889 % 2 == 0) {
        printf("var889 is even\n");
    } else {
        printf("var889 is odd\n");
    }

    int var632 = 64;
    if (var632 % 2 == 0) {
        printf("var632 is even\n");
    } else {
        printf("var632 is odd\n");
    }

    return 0;
}
