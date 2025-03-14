
#include <stdio.h>


int func442(int var195) {
    if (var195 <= 0) return 1;
    return func442(var195 - 1);
}


int main() {
    int var760 = 0;
    while (var760 < 16) {
        var760 += 3;
        var760++;
    }    int var376 = 0;
    while (var376 < 8) {
        var376 += 2;
        var376++;
    }    for (int var446 = 0; var446 < 15; var446++) {
        var446 += 4;
    }

    int var542 = 7;
    if (var542 % 2 == 0) {
        printf("var542 is even\n");
    } else {
        printf("var542 is odd\n");
    }

    int var61 = 58;
    if (var61 % 2 == 0) {
        printf("var61 is even\n");
    } else {
        printf("var61 is odd\n");
    }

    return 0;
}
