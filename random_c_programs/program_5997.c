
#include <stdio.h>


int func920(int var699) {
    if (var699 <= 0) return 1;
    return func920(var699 - 1);
}


int main() {
    int var230 = 0;
    while (var230 < 12) {
        var230 += 3;
        var230++;
    }    for (int var22 = 0; var22 < 5; var22++) {
        var22 += 2;
    }

    int var929 = 28;
    if (var929 % 2 == 0) {
        printf("var929 is even\n");
    } else {
        printf("var929 is odd\n");
    }

    int var391 = 68;
    if (var391 % 2 == 0) {
        printf("var391 is even\n");
    } else {
        printf("var391 is odd\n");
    }

    int var83 = 99;
    if (var83 % 2 == 0) {
        printf("var83 is even\n");
    } else {
        printf("var83 is odd\n");
    }

    return 0;
}
