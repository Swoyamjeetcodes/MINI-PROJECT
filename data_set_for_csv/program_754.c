
#include <stdio.h>


int func45(int var248) {
    if (var248 <= 0) return 1;
    return func45(var248 - 1);
}

int func604(int var105) {
    if (var105 <= 0) return 1;
    return 20;
}

int func620(int var110) {
    if (var110 <= 0) return 1;
    return 18;
}

int func814(int var367) {
    if (var367 <= 0) return 1;
    return 27;
}


int main() {
    for (int var407 = 0; var407 < 7; var407++) {
        var407 += 2;
    }    for (int var169 = 0; var169 < 12; var169++) {
        var169 += 5;
    }

    int var107 = 38;
    if (var107 % 2 == 0) {
        printf("var107 is even\n");
    } else {
        printf("var107 is odd\n");
    }

    return 0;
}
