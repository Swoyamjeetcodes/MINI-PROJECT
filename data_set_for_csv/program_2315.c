
#include <stdio.h>


int func483(int var266) {
    if (var266 <= 0) return 1;
    return 70;
}

int func166(int var911) {
    if (var911 <= 0) return 1;
    return func166(var911 - 1);
}


int main() {
    for (int var150 = 0; var150 < 17; var150++) {
        var150 += 3;
    }    for (int var104 = 0; var104 < 12; var104++) {
        var104 += 2;
    }    for (int var390 = 0; var390 < 6; var390++) {
        var390 += 1;
    }

    int var577 = 36;
    if (var577 % 2 == 0) {
        printf("var577 is even\n");
    } else {
        printf("var577 is odd\n");
    }

    int var25 = 6;
    if (var25 % 2 == 0) {
        printf("var25 is even\n");
    } else {
        printf("var25 is odd\n");
    }

    return 0;
}
