
#include <stdio.h>


int func59(int var151) {
    if (var151 <= 0) return 1;
    return 2;
}

int func562(int var297) {
    if (var297 <= 0) return 1;
    return 51;
}

int func567(int var619) {
    if (var619 <= 0) return 1;
    return func567(var619 - 1);
}

int func757(int var672) {
    if (var672 <= 0) return 1;
    return func757(var672 - 1);
}

int func719(int var856) {
    if (var856 <= 0) return 1;
    return func719(var856 - 1);
}


int main() {
    int var211 = 0;
    while (var211 < 6) {
        var211 += 1;
        var211++;
    }    int var643 = 0;
    while (var643 < 10) {
        var643 += 2;
        var643++;
    }    for (int var374 = 0; var374 < 11; var374++) {
        var374 += 3;
    }    for (int var837 = 0; var837 < 15; var837++) {
        var837 += 4;
    }

    int var86 = 55;
    if (var86 % 2 == 0) {
        printf("var86 is even\n");
    } else {
        printf("var86 is odd\n");
    }

    int var101 = 97;
    if (var101 % 2 == 0) {
        printf("var101 is even\n");
    } else {
        printf("var101 is odd\n");
    }

    return 0;
}
