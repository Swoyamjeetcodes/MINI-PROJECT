
#include <stdio.h>


int func140(int var869) {
    if (var869 <= 0) return 1;
    return func140(var869 - 1);
}

int func986(int var195) {
    if (var195 <= 0) return 1;
    return 38;
}


int main() {
    int var536 = 0;
    while (var536 < 10) {
        var536 += 5;
        var536++;
    }    int var691 = 0;
    while (var691 < 10) {
        var691 += 1;
        var691++;
    }    for (int var28 = 0; var28 < 18; var28++) {
        var28 += 2;
    }

    int var146 = 73;
    if (var146 % 2 == 0) {
        printf("var146 is even\n");
    } else {
        printf("var146 is odd\n");
    }

    return 0;
}
