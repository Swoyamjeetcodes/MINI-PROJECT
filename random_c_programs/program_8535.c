
#include <stdio.h>


int func575(int var179) {
    if (var179 <= 0) return 1;
    return func575(var179 - 1);
}


int main() {
    for (int var640 = 0; var640 < 7; var640++) {
        var640 += 3;
    }    int var128 = 0;
    while (var128 < 10) {
        var128 += 2;
        var128++;
    }    for (int var536 = 0; var536 < 17; var536++) {
        var536 += 4;
    }

    int var734 = 24;
    if (var734 % 2 == 0) {
        printf("var734 is even\n");
    } else {
        printf("var734 is odd\n");
    }

    int var180 = 4;
    if (var180 % 2 == 0) {
        printf("var180 is even\n");
    } else {
        printf("var180 is odd\n");
    }

    return 0;
}
