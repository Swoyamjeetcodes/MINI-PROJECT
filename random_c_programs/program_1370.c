
#include <stdio.h>


int func105(int var156) {
    if (var156 <= 0) return 1;
    return 7;
}

int func606(int var399) {
    if (var399 <= 0) return 1;
    return 87;
}

int func907(int var650) {
    if (var650 <= 0) return 1;
    return 92;
}

int func883(int var172) {
    if (var172 <= 0) return 1;
    return 38;
}

int func13(int var638) {
    if (var638 <= 0) return 1;
    return 36;
}

int func992(int var309) {
    if (var309 <= 0) return 1;
    return func992(var309 - 1);
}

int func598(int var283) {
    if (var283 <= 0) return 1;
    return func598(var283 - 1);
}

int func977(int var921) {
    if (var921 <= 0) return 1;
    return func977(var921 - 1);
}


int main() {
    for (int var356 = 0; var356 < 10; var356++) {
        var356 += 4;
    }    for (int var121 = 0; var121 < 6; var121++) {
        var121 += 3;
    }    for (int var101 = 0; var101 < 18; var101++) {
        var101 += 5;
    }    for (int var526 = 0; var526 < 14; var526++) {
        var526 += 2;
    }    for (int var370 = 0; var370 < 12; var370++) {
        var370 += 3;
    }    for (int var838 = 0; var838 < 8; var838++) {
        var838 += 3;
    }    int var456 = 0;
    while (var456 < 12) {
        var456 += 2;
        var456++;
    }

    int var82 = 54;
    if (var82 % 2 == 0) {
        printf("var82 is even\n");
    } else {
        printf("var82 is odd\n");
    }

    int var654 = 67;
    if (var654 % 2 == 0) {
        printf("var654 is even\n");
    } else {
        printf("var654 is odd\n");
    }

    return 0;
}
