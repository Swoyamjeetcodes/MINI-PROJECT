
#include <stdio.h>


int func749(int var548) {
    if (var548 <= 0) return 1;
    return 78;
}

int func361(int var674) {
    if (var674 <= 0) return 1;
    return func361(var674 - 1);
}

int func748(int var381) {
    if (var381 <= 0) return 1;
    return func748(var381 - 1);
}

int func766(int var303) {
    if (var303 <= 0) return 1;
    return func766(var303 - 1);
}

int func463(int var737) {
    if (var737 <= 0) return 1;
    return 6;
}


int main() {
    int var67 = 0;
    while (var67 < 18) {
        var67 += 2;
        var67++;
    }    for (int var903 = 0; var903 < 17; var903++) {
        var903 += 2;
    }    int var172 = 0;
    while (var172 < 18) {
        var172 += 4;
        var172++;
    }

    int var811 = 42;
    if (var811 % 2 == 0) {
        printf("var811 is even\n");
    } else {
        printf("var811 is odd\n");
    }

    int var769 = 52;
    if (var769 % 2 == 0) {
        printf("var769 is even\n");
    } else {
        printf("var769 is odd\n");
    }

    return 0;
}
