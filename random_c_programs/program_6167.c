
#include <stdio.h>


int func693(int var685) {
    if (var685 <= 0) return 1;
    return func693(var685 - 1);
}

int func633(int var979) {
    if (var979 <= 0) return 1;
    return 95;
}

int func813(int var679) {
    if (var679 <= 0) return 1;
    return func813(var679 - 1);
}

int func606(int var934) {
    if (var934 <= 0) return 1;
    return func606(var934 - 1);
}

int func142(int var701) {
    if (var701 <= 0) return 1;
    return func142(var701 - 1);
}


int main() {
    int var584 = 0;
    while (var584 < 20) {
        var584 += 4;
        var584++;
    }    for (int var226 = 0; var226 < 5; var226++) {
        var226 += 3;
    }    int var430 = 0;
    while (var430 < 5) {
        var430 += 5;
        var430++;
    }

    int var199 = 64;
    if (var199 % 2 == 0) {
        printf("var199 is even\n");
    } else {
        printf("var199 is odd\n");
    }

    return 0;
}
