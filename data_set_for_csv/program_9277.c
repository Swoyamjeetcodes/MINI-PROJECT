
#include <stdio.h>


int func337(int var654) {
    if (var654 <= 0) return 1;
    return func337(var654 - 1);
}

int func143(int var356) {
    if (var356 <= 0) return 1;
    return 18;
}

int func77(int var832) {
    if (var832 <= 0) return 1;
    return func77(var832 - 1);
}

int func779(int var728) {
    if (var728 <= 0) return 1;
    return 11;
}

int func15(int var533) {
    if (var533 <= 0) return 1;
    return func15(var533 - 1);
}

int func880(int var798) {
    if (var798 <= 0) return 1;
    return 62;
}


int main() {
    for (int var935 = 0; var935 < 8; var935++) {
        var935 += 4;
    }    for (int var624 = 0; var624 < 12; var624++) {
        var624 += 2;
    }    for (int var189 = 0; var189 < 18; var189++) {
        var189 += 2;
    }    for (int var258 = 0; var258 < 18; var258++) {
        var258 += 1;
    }    int var71 = 0;
    while (var71 < 10) {
        var71 += 2;
        var71++;
    }

    int var822 = 96;
    if (var822 % 2 == 0) {
        printf("var822 is even\n");
    } else {
        printf("var822 is odd\n");
    }

    return 0;
}
