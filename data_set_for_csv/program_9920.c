
#include <stdio.h>


int func140(int var434) {
    if (var434 <= 0) return 1;
    return func140(var434 - 1);
}


int main() {
    int var640 = 0;
    while (var640 < 19) {
        var640 += 2;
        var640++;
    }    for (int var189 = 0; var189 < 20; var189++) {
        var189 += 2;
    }    for (int var548 = 0; var548 < 15; var548++) {
        var548 += 4;
    }    int var255 = 0;
    while (var255 < 15) {
        var255 += 5;
        var255++;
    }    int var304 = 0;
    while (var304 < 18) {
        var304 += 3;
        var304++;
    }

    int var798 = 32;
    if (var798 % 2 == 0) {
        printf("var798 is even\n");
    } else {
        printf("var798 is odd\n");
    }

    return 0;
}
