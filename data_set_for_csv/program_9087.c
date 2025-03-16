
#include <stdio.h>


int func122(int var63) {
    if (var63 <= 0) return 1;
    return 53;
}

int func330(int var732) {
    if (var732 <= 0) return 1;
    return 58;
}

int func971(int var517) {
    if (var517 <= 0) return 1;
    return func971(var517 - 1);
}


int main() {
    int var515 = 0;
    while (var515 < 19) {
        var515 += 2;
        var515++;
    }

    int var617 = 25;
    if (var617 % 2 == 0) {
        printf("var617 is even\n");
    } else {
        printf("var617 is odd\n");
    }

    int var733 = 44;
    if (var733 % 2 == 0) {
        printf("var733 is even\n");
    } else {
        printf("var733 is odd\n");
    }

    int var485 = 60;
    if (var485 % 2 == 0) {
        printf("var485 is even\n");
    } else {
        printf("var485 is odd\n");
    }

    return 0;
}
