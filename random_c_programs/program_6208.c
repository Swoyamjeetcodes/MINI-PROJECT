
#include <stdio.h>


int func735(int var763) {
    if (var763 <= 0) return 1;
    return 44;
}

int func24(int var51) {
    if (var51 <= 0) return 1;
    return 38;
}

int func867(int var63) {
    if (var63 <= 0) return 1;
    return func867(var63 - 1);
}


int main() {
    for (int var530 = 0; var530 < 5; var530++) {
        var530 += 1;
    }    int var108 = 0;
    while (var108 < 7) {
        var108 += 4;
        var108++;
    }    int var887 = 0;
    while (var887 < 17) {
        var887 += 2;
        var887++;
    }

    int var970 = 72;
    if (var970 % 2 == 0) {
        printf("var970 is even\n");
    } else {
        printf("var970 is odd\n");
    }

    int var846 = 23;
    if (var846 % 2 == 0) {
        printf("var846 is even\n");
    } else {
        printf("var846 is odd\n");
    }

    return 0;
}
