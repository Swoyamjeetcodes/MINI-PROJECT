
#include <stdio.h>


int func600(int var645) {
    if (var645 <= 0) return 1;
    return 34;
}

int func662(int var813) {
    if (var813 <= 0) return 1;
    return func662(var813 - 1);
}

int func356(int var440) {
    if (var440 <= 0) return 1;
    return 11;
}

int func708(int var369) {
    if (var369 <= 0) return 1;
    return func708(var369 - 1);
}

int func852(int var646) {
    if (var646 <= 0) return 1;
    return func852(var646 - 1);
}


int main() {
    for (int var24 = 0; var24 < 20; var24++) {
        var24 += 1;
    }    int var975 = 0;
    while (var975 < 14) {
        var975 += 4;
        var975++;
    }

    int var503 = 13;
    if (var503 % 2 == 0) {
        printf("var503 is even\n");
    } else {
        printf("var503 is odd\n");
    }

    int var883 = 58;
    if (var883 % 2 == 0) {
        printf("var883 is even\n");
    } else {
        printf("var883 is odd\n");
    }

    return 0;
}
