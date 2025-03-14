
#include <stdio.h>


int func991(int var610) {
    if (var610 <= 0) return 1;
    return func991(var610 - 1);
}

int func235(int var579) {
    if (var579 <= 0) return 1;
    return 93;
}

int func416(int var246) {
    if (var246 <= 0) return 1;
    return 92;
}


int main() {
    for (int var560 = 0; var560 < 18; var560++) {
        var560 += 5;
    }    int var757 = 0;
    while (var757 < 5) {
        var757 += 3;
        var757++;
    }    for (int var818 = 0; var818 < 10; var818++) {
        var818 += 2;
    }    int var812 = 0;
    while (var812 < 16) {
        var812 += 5;
        var812++;
    }    int var832 = 0;
    while (var832 < 9) {
        var832 += 2;
        var832++;
    }

    int var64 = 54;
    if (var64 % 2 == 0) {
        printf("var64 is even\n");
    } else {
        printf("var64 is odd\n");
    }

    return 0;
}
