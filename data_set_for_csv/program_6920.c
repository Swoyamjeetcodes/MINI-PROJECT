
#include <stdio.h>


int func172(int var491) {
    if (var491 <= 0) return 1;
    return 61;
}

int func745(int var462) {
    if (var462 <= 0) return 1;
    return func745(var462 - 1);
}

int func971(int var501) {
    if (var501 <= 0) return 1;
    return func971(var501 - 1);
}


int main() {
    for (int var241 = 0; var241 < 17; var241++) {
        var241 += 5;
    }    for (int var411 = 0; var411 < 19; var411++) {
        var411 += 5;
    }    for (int var314 = 0; var314 < 14; var314++) {
        var314 += 2;
    }

    int var567 = 51;
    if (var567 % 2 == 0) {
        printf("var567 is even\n");
    } else {
        printf("var567 is odd\n");
    }

    int var49 = 94;
    if (var49 % 2 == 0) {
        printf("var49 is even\n");
    } else {
        printf("var49 is odd\n");
    }

    return 0;
}
