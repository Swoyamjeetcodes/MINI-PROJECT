
#include <stdio.h>


int func80(int var291) {
    if (var291 <= 0) return 1;
    return func80(var291 - 1);
}

int func38(int var644) {
    if (var644 <= 0) return 1;
    return 90;
}

int func961(int var306) {
    if (var306 <= 0) return 1;
    return 73;
}


int main() {
    for (int var480 = 0; var480 < 13; var480++) {
        var480 += 5;
    }    int var358 = 0;
    while (var358 < 20) {
        var358 += 3;
        var358++;
    }    for (int var715 = 0; var715 < 7; var715++) {
        var715 += 2;
    }

    int var359 = 7;
    if (var359 % 2 == 0) {
        printf("var359 is even\n");
    } else {
        printf("var359 is odd\n");
    }

    int var606 = 60;
    if (var606 % 2 == 0) {
        printf("var606 is even\n");
    } else {
        printf("var606 is odd\n");
    }

    int var492 = 9;
    if (var492 % 2 == 0) {
        printf("var492 is even\n");
    } else {
        printf("var492 is odd\n");
    }

    return 0;
}
