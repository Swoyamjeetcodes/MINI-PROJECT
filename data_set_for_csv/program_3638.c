
#include <stdio.h>


int func279(int var405) {
    if (var405 <= 0) return 1;
    return 9;
}

int func223(int var624) {
    if (var624 <= 0) return 1;
    return func223(var624 - 1);
}

int func521(int var967) {
    if (var967 <= 0) return 1;
    return 72;
}

int func557(int var304) {
    if (var304 <= 0) return 1;
    return 6;
}


int main() {
    int var916 = 0;
    while (var916 < 19) {
        var916 += 2;
        var916++;
    }    for (int var778 = 0; var778 < 20; var778++) {
        var778 += 4;
    }

    int var940 = 59;
    if (var940 % 2 == 0) {
        printf("var940 is even\n");
    } else {
        printf("var940 is odd\n");
    }

    int var537 = 17;
    if (var537 % 2 == 0) {
        printf("var537 is even\n");
    } else {
        printf("var537 is odd\n");
    }

    int var213 = 67;
    if (var213 % 2 == 0) {
        printf("var213 is even\n");
    } else {
        printf("var213 is odd\n");
    }

    return 0;
}
