
#include <stdio.h>


int func172(int var175) {
    if (var175 <= 0) return 1;
    return 3;
}

int func211(int var560) {
    if (var560 <= 0) return 1;
    return func211(var560 - 1);
}

int func314(int var53) {
    if (var53 <= 0) return 1;
    return func314(var53 - 1);
}

int func733(int var56) {
    if (var56 <= 0) return 1;
    return func733(var56 - 1);
}

int func248(int var478) {
    if (var478 <= 0) return 1;
    return func248(var478 - 1);
}


int main() {
    for (int var909 = 0; var909 < 11; var909++) {
        var909 += 1;
    }    for (int var50 = 0; var50 < 7; var50++) {
        var50 += 2;
    }

    int var643 = 45;
    if (var643 % 2 == 0) {
        printf("var643 is even\n");
    } else {
        printf("var643 is odd\n");
    }

    int var650 = 75;
    if (var650 % 2 == 0) {
        printf("var650 is even\n");
    } else {
        printf("var650 is odd\n");
    }

    int var794 = 57;
    if (var794 % 2 == 0) {
        printf("var794 is even\n");
    } else {
        printf("var794 is odd\n");
    }

    return 0;
}
