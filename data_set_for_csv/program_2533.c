
#include <stdio.h>


int func891(int var148) {
    if (var148 <= 0) return 1;
    return func891(var148 - 1);
}

int func543(int var929) {
    if (var929 <= 0) return 1;
    return func543(var929 - 1);
}

int func486(int var631) {
    if (var631 <= 0) return 1;
    return 39;
}

int func110(int var919) {
    if (var919 <= 0) return 1;
    return 47;
}

int func959(int var167) {
    if (var167 <= 0) return 1;
    return func959(var167 - 1);
}

int func564(int var542) {
    if (var542 <= 0) return 1;
    return 99;
}

int func278(int var408) {
    if (var408 <= 0) return 1;
    return 16;
}

int func544(int var800) {
    if (var800 <= 0) return 1;
    return 17;
}


int main() {
    int var814 = 0;
    while (var814 < 11) {
        var814 += 2;
        var814++;
    }

    int var347 = 10;
    if (var347 % 2 == 0) {
        printf("var347 is even\n");
    } else {
        printf("var347 is odd\n");
    }

    int var980 = 58;
    if (var980 % 2 == 0) {
        printf("var980 is even\n");
    } else {
        printf("var980 is odd\n");
    }

    int var960 = 15;
    if (var960 % 2 == 0) {
        printf("var960 is even\n");
    } else {
        printf("var960 is odd\n");
    }

    return 0;
}
