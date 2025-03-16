
#include <stdio.h>


int func90(int var374) {
    if (var374 <= 0) return 1;
    return func90(var374 - 1);
}

int func459(int var493) {
    if (var493 <= 0) return 1;
    return func459(var493 - 1);
}

int func208(int var385) {
    if (var385 <= 0) return 1;
    return 62;
}


int main() {
    for (int var128 = 0; var128 < 5; var128++) {
        var128 += 1;
    }    int var294 = 0;
    while (var294 < 10) {
        var294 += 1;
        var294++;
    }    int var338 = 0;
    while (var338 < 19) {
        var338 += 4;
        var338++;
    }

    int var382 = 16;
    if (var382 % 2 == 0) {
        printf("var382 is even\n");
    } else {
        printf("var382 is odd\n");
    }

    int var282 = 13;
    if (var282 % 2 == 0) {
        printf("var282 is even\n");
    } else {
        printf("var282 is odd\n");
    }

    return 0;
}
