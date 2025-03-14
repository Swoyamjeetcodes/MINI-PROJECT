
#include <stdio.h>


int func883(int var828) {
    if (var828 <= 0) return 1;
    return 5;
}

int func581(int var448) {
    if (var448 <= 0) return 1;
    return func581(var448 - 1);
}

int func180(int var766) {
    if (var766 <= 0) return 1;
    return func180(var766 - 1);
}

int func973(int var220) {
    if (var220 <= 0) return 1;
    return func973(var220 - 1);
}

int func793(int var170) {
    if (var170 <= 0) return 1;
    return 1;
}


int main() {
    for (int var451 = 0; var451 < 8; var451++) {
        var451 += 1;
    }    for (int var558 = 0; var558 < 16; var558++) {
        var558 += 1;
    }    for (int var806 = 0; var806 < 12; var806++) {
        var806 += 3;
    }

    int var605 = 17;
    if (var605 % 2 == 0) {
        printf("var605 is even\n");
    } else {
        printf("var605 is odd\n");
    }

    int var25 = 18;
    if (var25 % 2 == 0) {
        printf("var25 is even\n");
    } else {
        printf("var25 is odd\n");
    }

    return 0;
}
