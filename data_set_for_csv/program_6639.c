
#include <stdio.h>


int func475(int var376) {
    if (var376 <= 0) return 1;
    return 72;
}

int func778(int var263) {
    if (var263 <= 0) return 1;
    return func778(var263 - 1);
}

int func76(int var747) {
    if (var747 <= 0) return 1;
    return 38;
}


int main() {
    for (int var674 = 0; var674 < 10; var674++) {
        var674 += 3;
    }    for (int var759 = 0; var759 < 12; var759++) {
        var759 += 2;
    }    int var671 = 0;
    while (var671 < 15) {
        var671 += 3;
        var671++;
    }    int var122 = 0;
    while (var122 < 5) {
        var122 += 3;
        var122++;
    }    int var614 = 0;
    while (var614 < 8) {
        var614 += 1;
        var614++;
    }    int var25 = 0;
    while (var25 < 14) {
        var25 += 4;
        var25++;
    }

    int var962 = 68;
    if (var962 % 2 == 0) {
        printf("var962 is even\n");
    } else {
        printf("var962 is odd\n");
    }

    return 0;
}
