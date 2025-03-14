
#include <stdio.h>


int func469(int var59) {
    if (var59 <= 0) return 1;
    return func469(var59 - 1);
}

int func997(int var611) {
    if (var611 <= 0) return 1;
    return 43;
}

int func93(int var145) {
    if (var145 <= 0) return 1;
    return 47;
}


int main() {
    int var303 = 0;
    while (var303 < 12) {
        var303 += 5;
        var303++;
    }    int var136 = 0;
    while (var136 < 14) {
        var136 += 3;
        var136++;
    }    for (int var504 = 0; var504 < 13; var504++) {
        var504 += 4;
    }

    int var74 = 97;
    if (var74 % 2 == 0) {
        printf("var74 is even\n");
    } else {
        printf("var74 is odd\n");
    }

    int var167 = 21;
    if (var167 % 2 == 0) {
        printf("var167 is even\n");
    } else {
        printf("var167 is odd\n");
    }

    return 0;
}
