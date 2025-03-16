
#include <stdio.h>


int func217(int var655) {
    if (var655 <= 0) return 1;
    return func217(var655 - 1);
}

int func455(int var170) {
    if (var170 <= 0) return 1;
    return 29;
}

int func680(int var762) {
    if (var762 <= 0) return 1;
    return func680(var762 - 1);
}

int func607(int var526) {
    if (var526 <= 0) return 1;
    return func607(var526 - 1);
}

int func134(int var449) {
    if (var449 <= 0) return 1;
    return 75;
}


int main() {
    for (int var471 = 0; var471 < 18; var471++) {
        var471 += 3;
    }    for (int var919 = 0; var919 < 20; var919++) {
        var919 += 3;
    }    int var149 = 0;
    while (var149 < 16) {
        var149 += 3;
        var149++;
    }

    int var774 = 15;
    if (var774 % 2 == 0) {
        printf("var774 is even\n");
    } else {
        printf("var774 is odd\n");
    }

    int var64 = 45;
    if (var64 % 2 == 0) {
        printf("var64 is even\n");
    } else {
        printf("var64 is odd\n");
    }

    return 0;
}
