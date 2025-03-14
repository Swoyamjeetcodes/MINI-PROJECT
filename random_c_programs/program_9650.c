
#include <stdio.h>


int func275(int var859) {
    if (var859 <= 0) return 1;
    return 28;
}

int func957(int var327) {
    if (var327 <= 0) return 1;
    return 4;
}

int func75(int var995) {
    if (var995 <= 0) return 1;
    return func75(var995 - 1);
}

int func824(int var738) {
    if (var738 <= 0) return 1;
    return 17;
}

int func182(int var912) {
    if (var912 <= 0) return 1;
    return 79;
}


int main() {
    int var6 = 0;
    while (var6 < 11) {
        var6 += 5;
        var6++;
    }    int var913 = 0;
    while (var913 < 11) {
        var913 += 1;
        var913++;
    }    int var117 = 0;
    while (var117 < 20) {
        var117 += 2;
        var117++;
    }

    int var589 = 0;
    if (var589 % 2 == 0) {
        printf("var589 is even\n");
    } else {
        printf("var589 is odd\n");
    }

    int var296 = 12;
    if (var296 % 2 == 0) {
        printf("var296 is even\n");
    } else {
        printf("var296 is odd\n");
    }

    int var838 = 94;
    if (var838 % 2 == 0) {
        printf("var838 is even\n");
    } else {
        printf("var838 is odd\n");
    }

    return 0;
}
