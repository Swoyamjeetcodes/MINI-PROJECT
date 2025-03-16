
#include <stdio.h>


int func626(int var638) {
    if (var638 <= 0) return 1;
    return func626(var638 - 1);
}

int func905(int var626) {
    if (var626 <= 0) return 1;
    return 84;
}

int func348(int var445) {
    if (var445 <= 0) return 1;
    return func348(var445 - 1);
}

int func329(int var483) {
    if (var483 <= 0) return 1;
    return 23;
}

int func218(int var682) {
    if (var682 <= 0) return 1;
    return func218(var682 - 1);
}


int main() {
    for (int var17 = 0; var17 < 12; var17++) {
        var17 += 1;
    }    for (int var782 = 0; var782 < 14; var782++) {
        var782 += 1;
    }    int var458 = 0;
    while (var458 < 12) {
        var458 += 2;
        var458++;
    }

    int var963 = 74;
    if (var963 % 2 == 0) {
        printf("var963 is even\n");
    } else {
        printf("var963 is odd\n");
    }

    int var463 = 35;
    if (var463 % 2 == 0) {
        printf("var463 is even\n");
    } else {
        printf("var463 is odd\n");
    }

    return 0;
}
