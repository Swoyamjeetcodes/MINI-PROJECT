
#include <stdio.h>


int func221(int var261) {
    if (var261 <= 0) return 1;
    return func221(var261 - 1);
}

int func795(int var427) {
    if (var427 <= 0) return 1;
    return 92;
}

int func623(int var733) {
    if (var733 <= 0) return 1;
    return func623(var733 - 1);
}

int func163(int var151) {
    if (var151 <= 0) return 1;
    return 49;
}

int func691(int var467) {
    if (var467 <= 0) return 1;
    return 35;
}


int main() {
    int var56 = 0;
    while (var56 < 9) {
        var56 += 4;
        var56++;
    }    int var212 = 0;
    while (var212 < 8) {
        var212 += 2;
        var212++;
    }    for (int var400 = 0; var400 < 13; var400++) {
        var400 += 1;
    }    int var962 = 0;
    while (var962 < 15) {
        var962 += 4;
        var962++;
    }    for (int var366 = 0; var366 < 19; var366++) {
        var366 += 1;
    }    int var224 = 0;
    while (var224 < 6) {
        var224 += 1;
        var224++;
    }

    int var967 = 92;
    if (var967 % 2 == 0) {
        printf("var967 is even\n");
    } else {
        printf("var967 is odd\n");
    }

    int var550 = 55;
    if (var550 % 2 == 0) {
        printf("var550 is even\n");
    } else {
        printf("var550 is odd\n");
    }

    return 0;
}
