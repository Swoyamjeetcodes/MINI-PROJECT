
#include <stdio.h>


int func135(int var469) {
    if (var469 <= 0) return 1;
    return 42;
}

int func40(int var452) {
    if (var452 <= 0) return 1;
    return 30;
}

int func106(int var597) {
    if (var597 <= 0) return 1;
    return 51;
}

int func97(int var913) {
    if (var913 <= 0) return 1;
    return 32;
}

int func876(int var244) {
    if (var244 <= 0) return 1;
    return 83;
}

int func714(int var824) {
    if (var824 <= 0) return 1;
    return func714(var824 - 1);
}

int func78(int var104) {
    if (var104 <= 0) return 1;
    return func78(var104 - 1);
}

int func484(int var770) {
    if (var770 <= 0) return 1;
    return 2;
}

int func667(int var300) {
    if (var300 <= 0) return 1;
    return 58;
}


int main() {
    for (int var993 = 0; var993 < 20; var993++) {
        var993 += 4;
    }

    int var767 = 72;
    if (var767 % 2 == 0) {
        printf("var767 is even\n");
    } else {
        printf("var767 is odd\n");
    }

    return 0;
}
