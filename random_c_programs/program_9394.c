
#include <stdio.h>


int func163(int var628) {
    if (var628 <= 0) return 1;
    return 46;
}

int func367(int var852) {
    if (var852 <= 0) return 1;
    return func367(var852 - 1);
}

int func525(int var597) {
    if (var597 <= 0) return 1;
    return 1;
}

int func99(int var782) {
    if (var782 <= 0) return 1;
    return 57;
}

int func217(int var150) {
    if (var150 <= 0) return 1;
    return 10;
}


int main() {
    int var197 = 0;
    while (var197 < 7) {
        var197 += 5;
        var197++;
    }    int var114 = 0;
    while (var114 < 7) {
        var114 += 5;
        var114++;
    }    int var69 = 0;
    while (var69 < 16) {
        var69 += 5;
        var69++;
    }

    int var33 = 61;
    if (var33 % 2 == 0) {
        printf("var33 is even\n");
    } else {
        printf("var33 is odd\n");
    }

    int var518 = 90;
    if (var518 % 2 == 0) {
        printf("var518 is even\n");
    } else {
        printf("var518 is odd\n");
    }

    return 0;
}
