
#include <stdio.h>


int func521(int var412) {
    if (var412 <= 0) return 1;
    return 5;
}

int func366(int var538) {
    if (var538 <= 0) return 1;
    return func366(var538 - 1);
}

int func74(int var175) {
    if (var175 <= 0) return 1;
    return func74(var175 - 1);
}

int func605(int var250) {
    if (var250 <= 0) return 1;
    return 21;
}

int func213(int var281) {
    if (var281 <= 0) return 1;
    return func213(var281 - 1);
}

int func84(int var710) {
    if (var710 <= 0) return 1;
    return 100;
}

int func830(int var615) {
    if (var615 <= 0) return 1;
    return 38;
}

int func33(int var154) {
    if (var154 <= 0) return 1;
    return func33(var154 - 1);
}


int main() {
    int var558 = 0;
    while (var558 < 10) {
        var558 += 5;
        var558++;
    }    for (int var828 = 0; var828 < 6; var828++) {
        var828 += 5;
    }    int var909 = 0;
    while (var909 < 8) {
        var909 += 3;
        var909++;
    }    int var830 = 0;
    while (var830 < 16) {
        var830 += 3;
        var830++;
    }

    int var180 = 59;
    if (var180 % 2 == 0) {
        printf("var180 is even\n");
    } else {
        printf("var180 is odd\n");
    }

    return 0;
}
