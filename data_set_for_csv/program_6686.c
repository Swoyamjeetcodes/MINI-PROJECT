
#include <stdio.h>


int func813(int var322) {
    if (var322 <= 0) return 1;
    return func813(var322 - 1);
}

int func495(int var778) {
    if (var778 <= 0) return 1;
    return func495(var778 - 1);
}

int func423(int var500) {
    if (var500 <= 0) return 1;
    return func423(var500 - 1);
}

int func225(int var433) {
    if (var433 <= 0) return 1;
    return 59;
}

int func820(int var832) {
    if (var832 <= 0) return 1;
    return func820(var832 - 1);
}


int main() {
    for (int var315 = 0; var315 < 19; var315++) {
        var315 += 3;
    }    for (int var829 = 0; var829 < 19; var829++) {
        var829 += 2;
    }    for (int var520 = 0; var520 < 20; var520++) {
        var520 += 4;
    }

    int var576 = 84;
    if (var576 % 2 == 0) {
        printf("var576 is even\n");
    } else {
        printf("var576 is odd\n");
    }

    int var972 = 12;
    if (var972 % 2 == 0) {
        printf("var972 is even\n");
    } else {
        printf("var972 is odd\n");
    }

    return 0;
}
