
#include <stdio.h>


int func84(int var625) {
    if (var625 <= 0) return 1;
    return 41;
}

int func247(int var233) {
    if (var233 <= 0) return 1;
    return func247(var233 - 1);
}

int func376(int var77) {
    if (var77 <= 0) return 1;
    return func376(var77 - 1);
}

int func452(int var336) {
    if (var336 <= 0) return 1;
    return func452(var336 - 1);
}

int func319(int var511) {
    if (var511 <= 0) return 1;
    return func319(var511 - 1);
}

int func569(int var992) {
    if (var992 <= 0) return 1;
    return 46;
}


int main() {
    int var533 = 0;
    while (var533 < 11) {
        var533 += 5;
        var533++;
    }    int var971 = 0;
    while (var971 < 19) {
        var971 += 5;
        var971++;
    }    for (int var418 = 0; var418 < 18; var418++) {
        var418 += 3;
    }    int var669 = 0;
    while (var669 < 19) {
        var669 += 2;
        var669++;
    }

    int var314 = 90;
    if (var314 % 2 == 0) {
        printf("var314 is even\n");
    } else {
        printf("var314 is odd\n");
    }

    int var808 = 20;
    if (var808 % 2 == 0) {
        printf("var808 is even\n");
    } else {
        printf("var808 is odd\n");
    }

    return 0;
}
