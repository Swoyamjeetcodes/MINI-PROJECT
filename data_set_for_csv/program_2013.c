
#include <stdio.h>


int func591(int var970) {
    if (var970 <= 0) return 1;
    return func591(var970 - 1);
}

int func502(int var338) {
    if (var338 <= 0) return 1;
    return func502(var338 - 1);
}

int func356(int var666) {
    if (var666 <= 0) return 1;
    return 44;
}

int func456(int var395) {
    if (var395 <= 0) return 1;
    return func456(var395 - 1);
}


int main() {
    for (int var573 = 0; var573 < 13; var573++) {
        var573 += 2;
    }    int var65 = 0;
    while (var65 < 8) {
        var65 += 4;
        var65++;
    }    for (int var849 = 0; var849 < 12; var849++) {
        var849 += 5;
    }

    int var160 = 54;
    if (var160 % 2 == 0) {
        printf("var160 is even\n");
    } else {
        printf("var160 is odd\n");
    }

    return 0;
}
