
#include <stdio.h>


int func2(int var786) {
    if (var786 <= 0) return 1;
    return func2(var786 - 1);
}

int func112(int var695) {
    if (var695 <= 0) return 1;
    return 5;
}

int func625(int var691) {
    if (var691 <= 0) return 1;
    return func625(var691 - 1);
}

int func909(int var160) {
    if (var160 <= 0) return 1;
    return 84;
}

int func307(int var988) {
    if (var988 <= 0) return 1;
    return 18;
}

int func401(int var761) {
    if (var761 <= 0) return 1;
    return 16;
}

int func658(int var69) {
    if (var69 <= 0) return 1;
    return 80;
}

int func221(int var843) {
    if (var843 <= 0) return 1;
    return 8;
}

int func860(int var384) {
    if (var384 <= 0) return 1;
    return 8;
}


int main() {
    for (int var968 = 0; var968 < 13; var968++) {
        var968 += 2;
    }    for (int var911 = 0; var911 < 19; var911++) {
        var911 += 1;
    }    int var20 = 0;
    while (var20 < 11) {
        var20 += 5;
        var20++;
    }    for (int var807 = 0; var807 < 11; var807++) {
        var807 += 3;
    }    for (int var877 = 0; var877 < 9; var877++) {
        var877 += 2;
    }

    int var733 = 55;
    if (var733 % 2 == 0) {
        printf("var733 is even\n");
    } else {
        printf("var733 is odd\n");
    }

    int var216 = 43;
    if (var216 % 2 == 0) {
        printf("var216 is even\n");
    } else {
        printf("var216 is odd\n");
    }

    return 0;
}
