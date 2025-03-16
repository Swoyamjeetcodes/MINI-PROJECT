
#include <stdio.h>


int func433(int var865) {
    if (var865 <= 0) return 1;
    return func433(var865 - 1);
}

int func591(int var981) {
    if (var981 <= 0) return 1;
    return 26;
}

int func183(int var14) {
    if (var14 <= 0) return 1;
    return 26;
}

int func106(int var246) {
    if (var246 <= 0) return 1;
    return 75;
}


int main() {
    for (int var677 = 0; var677 < 12; var677++) {
        var677 += 1;
    }    for (int var437 = 0; var437 < 12; var437++) {
        var437 += 3;
    }    int var199 = 0;
    while (var199 < 5) {
        var199 += 2;
        var199++;
    }    for (int var846 = 0; var846 < 6; var846++) {
        var846 += 5;
    }    int var525 = 0;
    while (var525 < 9) {
        var525 += 5;
        var525++;
    }    int var543 = 0;
    while (var543 < 16) {
        var543 += 5;
        var543++;
    }    for (int var446 = 0; var446 < 6; var446++) {
        var446 += 4;
    }

    int var367 = 37;
    if (var367 % 2 == 0) {
        printf("var367 is even\n");
    } else {
        printf("var367 is odd\n");
    }

    return 0;
}
