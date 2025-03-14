
#include <stdio.h>


int func409(int var939) {
    if (var939 <= 0) return 1;
    return 98;
}

int func73(int var521) {
    if (var521 <= 0) return 1;
    return func73(var521 - 1);
}


int main() {
    for (int var967 = 0; var967 < 7; var967++) {
        var967 += 4;
    }    for (int var240 = 0; var240 < 6; var240++) {
        var240 += 4;
    }

    int var12 = 11;
    if (var12 % 2 == 0) {
        printf("var12 is even\n");
    } else {
        printf("var12 is odd\n");
    }

    return 0;
}
