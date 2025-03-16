
#include <stdio.h>


int func482(int var908) {
    if (var908 <= 0) return 1;
    return 50;
}

int func813(int var479) {
    if (var479 <= 0) return 1;
    return func813(var479 - 1);
}

int func958(int var713) {
    if (var713 <= 0) return 1;
    return 14;
}


int main() {
    int var777 = 0;
    while (var777 < 17) {
        var777 += 3;
        var777++;
    }    int var528 = 0;
    while (var528 < 12) {
        var528 += 4;
        var528++;
    }    for (int var537 = 0; var537 < 13; var537++) {
        var537 += 1;
    }

    int var57 = 70;
    if (var57 % 2 == 0) {
        printf("var57 is even\n");
    } else {
        printf("var57 is odd\n");
    }

    int var691 = 63;
    if (var691 % 2 == 0) {
        printf("var691 is even\n");
    } else {
        printf("var691 is odd\n");
    }

    return 0;
}
