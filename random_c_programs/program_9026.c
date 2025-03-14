
#include <stdio.h>


int func25(int var49) {
    if (var49 <= 0) return 1;
    return func25(var49 - 1);
}

int func218(int var212) {
    if (var212 <= 0) return 1;
    return func218(var212 - 1);
}

int func606(int var521) {
    if (var521 <= 0) return 1;
    return 73;
}


int main() {
    int var307 = 0;
    while (var307 < 19) {
        var307 += 2;
        var307++;
    }

    int var384 = 4;
    if (var384 % 2 == 0) {
        printf("var384 is even\n");
    } else {
        printf("var384 is odd\n");
    }

    int var180 = 35;
    if (var180 % 2 == 0) {
        printf("var180 is even\n");
    } else {
        printf("var180 is odd\n");
    }

    return 0;
}
