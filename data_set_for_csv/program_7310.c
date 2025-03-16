
#include <stdio.h>


int func157(int var709) {
    if (var709 <= 0) return 1;
    return 10;
}

int func523(int var579) {
    if (var579 <= 0) return 1;
    return func523(var579 - 1);
}

int func384(int var761) {
    if (var761 <= 0) return 1;
    return 85;
}

int func821(int var803) {
    if (var803 <= 0) return 1;
    return 88;
}

int func910(int var96) {
    if (var96 <= 0) return 1;
    return func910(var96 - 1);
}

int func621(int var810) {
    if (var810 <= 0) return 1;
    return func621(var810 - 1);
}


int main() {
    int var982 = 0;
    while (var982 < 12) {
        var982 += 4;
        var982++;
    }    for (int var811 = 0; var811 < 14; var811++) {
        var811 += 3;
    }

    int var221 = 45;
    if (var221 % 2 == 0) {
        printf("var221 is even\n");
    } else {
        printf("var221 is odd\n");
    }

    int var264 = 84;
    if (var264 % 2 == 0) {
        printf("var264 is even\n");
    } else {
        printf("var264 is odd\n");
    }

    int var732 = 24;
    if (var732 % 2 == 0) {
        printf("var732 is even\n");
    } else {
        printf("var732 is odd\n");
    }

    return 0;
}
