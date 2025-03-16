
#include <stdio.h>


int func214(int var412) {
    if (var412 <= 0) return 1;
    return 2;
}

int func317(int var794) {
    if (var794 <= 0) return 1;
    return func317(var794 - 1);
}

int func796(int var823) {
    if (var823 <= 0) return 1;
    return 61;
}

int func915(int var192) {
    if (var192 <= 0) return 1;
    return 76;
}


int main() {
    for (int var272 = 0; var272 < 5; var272++) {
        var272 += 5;
    }    for (int var927 = 0; var927 < 16; var927++) {
        var927 += 5;
    }    int var828 = 0;
    while (var828 < 10) {
        var828 += 2;
        var828++;
    }    int var286 = 0;
    while (var286 < 7) {
        var286 += 4;
        var286++;
    }

    int var512 = 23;
    if (var512 % 2 == 0) {
        printf("var512 is even\n");
    } else {
        printf("var512 is odd\n");
    }

    int var517 = 86;
    if (var517 % 2 == 0) {
        printf("var517 is even\n");
    } else {
        printf("var517 is odd\n");
    }

    int var310 = 12;
    if (var310 % 2 == 0) {
        printf("var310 is even\n");
    } else {
        printf("var310 is odd\n");
    }

    int var767 = 48;
    if (var767 % 2 == 0) {
        printf("var767 is even\n");
    } else {
        printf("var767 is odd\n");
    }

    return 0;
}
