
#include <stdio.h>


int func251(int var299) {
    if (var299 <= 0) return 1;
    return 54;
}

int func689(int var494) {
    if (var494 <= 0) return 1;
    return 31;
}

int func381(int var280) {
    if (var280 <= 0) return 1;
    return func381(var280 - 1);
}


int main() {
    for (int var174 = 0; var174 < 15; var174++) {
        var174 += 3;
    }    int var943 = 0;
    while (var943 < 15) {
        var943 += 5;
        var943++;
    }    for (int var244 = 0; var244 < 9; var244++) {
        var244 += 1;
    }

    int var645 = 71;
    if (var645 % 2 == 0) {
        printf("var645 is even\n");
    } else {
        printf("var645 is odd\n");
    }

    int var769 = 64;
    if (var769 % 2 == 0) {
        printf("var769 is even\n");
    } else {
        printf("var769 is odd\n");
    }

    return 0;
}
