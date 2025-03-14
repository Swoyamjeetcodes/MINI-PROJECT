
#include <stdio.h>


int func759(int var760) {
    if (var760 <= 0) return 1;
    return func759(var760 - 1);
}

int func186(int var113) {
    if (var113 <= 0) return 1;
    return 41;
}

int func495(int var884) {
    if (var884 <= 0) return 1;
    return 48;
}

int func139(int var890) {
    if (var890 <= 0) return 1;
    return 60;
}

int func359(int var272) {
    if (var272 <= 0) return 1;
    return func359(var272 - 1);
}


int main() {
    for (int var660 = 0; var660 < 19; var660++) {
        var660 += 1;
    }    int var26 = 0;
    while (var26 < 10) {
        var26 += 4;
        var26++;
    }    for (int var600 = 0; var600 < 13; var600++) {
        var600 += 5;
    }

    int var823 = 58;
    if (var823 % 2 == 0) {
        printf("var823 is even\n");
    } else {
        printf("var823 is odd\n");
    }

    int var222 = 65;
    if (var222 % 2 == 0) {
        printf("var222 is even\n");
    } else {
        printf("var222 is odd\n");
    }

    return 0;
}
