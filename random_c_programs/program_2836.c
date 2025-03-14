
#include <stdio.h>


int func955(int var807) {
    if (var807 <= 0) return 1;
    return 12;
}

int func553(int var934) {
    if (var934 <= 0) return 1;
    return func553(var934 - 1);
}

int func990(int var307) {
    if (var307 <= 0) return 1;
    return 82;
}

int func185(int var993) {
    if (var993 <= 0) return 1;
    return 21;
}

int func505(int var270) {
    if (var270 <= 0) return 1;
    return func505(var270 - 1);
}


int main() {
    for (int var580 = 0; var580 < 9; var580++) {
        var580 += 2;
    }    for (int var341 = 0; var341 < 8; var341++) {
        var341 += 5;
    }    for (int var925 = 0; var925 < 19; var925++) {
        var925 += 5;
    }

    int var157 = 26;
    if (var157 % 2 == 0) {
        printf("var157 is even\n");
    } else {
        printf("var157 is odd\n");
    }

    return 0;
}
