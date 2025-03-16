
#include <stdio.h>


int func596(int var537) {
    if (var537 <= 0) return 1;
    return func596(var537 - 1);
}


int main() {
    for (int var561 = 0; var561 < 20; var561++) {
        var561 += 3;
    }    for (int var392 = 0; var392 < 11; var392++) {
        var392 += 1;
    }

    int var381 = 58;
    if (var381 % 2 == 0) {
        printf("var381 is even\n");
    } else {
        printf("var381 is odd\n");
    }

    int var706 = 16;
    if (var706 % 2 == 0) {
        printf("var706 is even\n");
    } else {
        printf("var706 is odd\n");
    }

    int var209 = 64;
    if (var209 % 2 == 0) {
        printf("var209 is even\n");
    } else {
        printf("var209 is odd\n");
    }

    return 0;
}
