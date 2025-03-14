
#include <stdio.h>


int func943(int var883) {
    if (var883 <= 0) return 1;
    return func943(var883 - 1);
}


int main() {
    for (int var304 = 0; var304 < 11; var304++) {
        var304 += 5;
    }    for (int var101 = 0; var101 < 20; var101++) {
        var101 += 3;
    }    int var586 = 0;
    while (var586 < 9) {
        var586 += 4;
        var586++;
    }    for (int var385 = 0; var385 < 10; var385++) {
        var385 += 1;
    }

    int var471 = 83;
    if (var471 % 2 == 0) {
        printf("var471 is even\n");
    } else {
        printf("var471 is odd\n");
    }

    int var259 = 25;
    if (var259 % 2 == 0) {
        printf("var259 is even\n");
    } else {
        printf("var259 is odd\n");
    }

    return 0;
}
