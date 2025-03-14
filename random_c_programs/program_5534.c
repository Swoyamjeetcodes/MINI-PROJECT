
#include <stdio.h>


int func855(int var20) {
    if (var20 <= 0) return 1;
    return 77;
}

int func960(int var527) {
    if (var527 <= 0) return 1;
    return 72;
}

int func404(int var298) {
    if (var298 <= 0) return 1;
    return func404(var298 - 1);
}


int main() {
    int var367 = 0;
    while (var367 < 10) {
        var367 += 5;
        var367++;
    }    int var836 = 0;
    while (var836 < 11) {
        var836 += 2;
        var836++;
    }    for (int var988 = 0; var988 < 14; var988++) {
        var988 += 3;
    }    for (int var80 = 0; var80 < 13; var80++) {
        var80 += 2;
    }    int var346 = 0;
    while (var346 < 5) {
        var346 += 3;
        var346++;
    }

    int var371 = 13;
    if (var371 % 2 == 0) {
        printf("var371 is even\n");
    } else {
        printf("var371 is odd\n");
    }

    int var477 = 94;
    if (var477 % 2 == 0) {
        printf("var477 is even\n");
    } else {
        printf("var477 is odd\n");
    }

    int var402 = 79;
    if (var402 % 2 == 0) {
        printf("var402 is even\n");
    } else {
        printf("var402 is odd\n");
    }

    return 0;
}
