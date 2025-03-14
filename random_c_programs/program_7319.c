
#include <stdio.h>


int func758(int var31) {
    if (var31 <= 0) return 1;
    return func758(var31 - 1);
}

int func212(int var529) {
    if (var529 <= 0) return 1;
    return func212(var529 - 1);
}


int main() {
    for (int var666 = 0; var666 < 12; var666++) {
        var666 += 3;
    }    int var783 = 0;
    while (var783 < 20) {
        var783 += 1;
        var783++;
    }    for (int var290 = 0; var290 < 6; var290++) {
        var290 += 3;
    }

    int var249 = 78;
    if (var249 % 2 == 0) {
        printf("var249 is even\n");
    } else {
        printf("var249 is odd\n");
    }

    int var470 = 22;
    if (var470 % 2 == 0) {
        printf("var470 is even\n");
    } else {
        printf("var470 is odd\n");
    }

    return 0;
}
