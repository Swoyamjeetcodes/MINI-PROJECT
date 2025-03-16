
#include <stdio.h>


int func690(int var568) {
    if (var568 <= 0) return 1;
    return func690(var568 - 1);
}

int func72(int var633) {
    if (var633 <= 0) return 1;
    return 47;
}

int func662(int var23) {
    if (var23 <= 0) return 1;
    return 98;
}

int func858(int var581) {
    if (var581 <= 0) return 1;
    return func858(var581 - 1);
}

int func163(int var215) {
    if (var215 <= 0) return 1;
    return 38;
}


int main() {
    for (int var930 = 0; var930 < 10; var930++) {
        var930 += 4;
    }    int var368 = 0;
    while (var368 < 9) {
        var368 += 5;
        var368++;
    }    int var577 = 0;
    while (var577 < 10) {
        var577 += 1;
        var577++;
    }

    int var867 = 71;
    if (var867 % 2 == 0) {
        printf("var867 is even\n");
    } else {
        printf("var867 is odd\n");
    }

    return 0;
}
