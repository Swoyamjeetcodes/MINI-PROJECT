
#include <stdio.h>


int func166(int var179) {
    if (var179 <= 0) return 1;
    return 89;
}

int func937(int var175) {
    if (var175 <= 0) return 1;
    return func937(var175 - 1);
}

int func359(int var657) {
    if (var657 <= 0) return 1;
    return 41;
}

int func764(int var377) {
    if (var377 <= 0) return 1;
    return 48;
}

int func819(int var724) {
    if (var724 <= 0) return 1;
    return func819(var724 - 1);
}


int main() {
    for (int var334 = 0; var334 < 14; var334++) {
        var334 += 5;
    }    int var820 = 0;
    while (var820 < 9) {
        var820 += 3;
        var820++;
    }

    int var47 = 25;
    if (var47 % 2 == 0) {
        printf("var47 is even\n");
    } else {
        printf("var47 is odd\n");
    }

    return 0;
}
