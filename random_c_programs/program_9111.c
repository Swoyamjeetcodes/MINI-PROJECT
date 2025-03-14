
#include <stdio.h>


int func892(int var956) {
    if (var956 <= 0) return 1;
    return func892(var956 - 1);
}


int main() {
    for (int var306 = 0; var306 < 19; var306++) {
        var306 += 1;
    }    int var299 = 0;
    while (var299 < 9) {
        var299 += 5;
        var299++;
    }    int var12 = 0;
    while (var12 < 15) {
        var12 += 1;
        var12++;
    }    for (int var233 = 0; var233 < 13; var233++) {
        var233 += 3;
    }    int var511 = 0;
    while (var511 < 6) {
        var511 += 1;
        var511++;
    }    int var771 = 0;
    while (var771 < 5) {
        var771 += 4;
        var771++;
    }    for (int var789 = 0; var789 < 9; var789++) {
        var789 += 2;
    }

    int var9 = 44;
    if (var9 % 2 == 0) {
        printf("var9 is even\n");
    } else {
        printf("var9 is odd\n");
    }

    return 0;
}
