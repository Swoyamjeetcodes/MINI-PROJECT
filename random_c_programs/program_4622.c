
#include <stdio.h>


int func818(int var770) {
    if (var770 <= 0) return 1;
    return func818(var770 - 1);
}


int main() {
    for (int var207 = 0; var207 < 9; var207++) {
        var207 += 2;
    }    int var659 = 0;
    while (var659 < 17) {
        var659 += 2;
        var659++;
    }

    int var948 = 92;
    if (var948 % 2 == 0) {
        printf("var948 is even\n");
    } else {
        printf("var948 is odd\n");
    }

    int var809 = 28;
    if (var809 % 2 == 0) {
        printf("var809 is even\n");
    } else {
        printf("var809 is odd\n");
    }

    int var392 = 30;
    if (var392 % 2 == 0) {
        printf("var392 is even\n");
    } else {
        printf("var392 is odd\n");
    }

    return 0;
}
