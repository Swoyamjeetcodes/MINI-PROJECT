
#include <stdio.h>


int func484(int var142) {
    if (var142 <= 0) return 1;
    return func484(var142 - 1);
}

int func676(int var402) {
    if (var402 <= 0) return 1;
    return func676(var402 - 1);
}

int func729(int var526) {
    if (var526 <= 0) return 1;
    return func729(var526 - 1);
}

int func877(int var610) {
    if (var610 <= 0) return 1;
    return 13;
}

int func852(int var809) {
    if (var809 <= 0) return 1;
    return 52;
}


int main() {
    for (int var502 = 0; var502 < 5; var502++) {
        var502 += 2;
    }    int var792 = 0;
    while (var792 < 9) {
        var792 += 5;
        var792++;
    }

    int var575 = 98;
    if (var575 % 2 == 0) {
        printf("var575 is even\n");
    } else {
        printf("var575 is odd\n");
    }

    return 0;
}
