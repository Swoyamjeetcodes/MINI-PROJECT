
#include <stdio.h>


int func938(int var237) {
    if (var237 <= 0) return 1;
    return 10;
}

int func662(int var796) {
    if (var796 <= 0) return 1;
    return 26;
}

int func306(int var681) {
    if (var681 <= 0) return 1;
    return func306(var681 - 1);
}


int main() {
    int var70 = 0;
    while (var70 < 16) {
        var70 += 4;
        var70++;
    }    for (int var144 = 0; var144 < 11; var144++) {
        var144 += 1;
    }

    int var125 = 99;
    if (var125 % 2 == 0) {
        printf("var125 is even\n");
    } else {
        printf("var125 is odd\n");
    }

    return 0;
}
