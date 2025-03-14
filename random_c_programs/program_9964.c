
#include <stdio.h>


int func986(int var581) {
    if (var581 <= 0) return 1;
    return func986(var581 - 1);
}


int main() {
    for (int var475 = 0; var475 < 12; var475++) {
        var475 += 1;
    }    for (int var695 = 0; var695 < 5; var695++) {
        var695 += 5;
    }    for (int var709 = 0; var709 < 9; var709++) {
        var709 += 4;
    }

    int var255 = 25;
    if (var255 % 2 == 0) {
        printf("var255 is even\n");
    } else {
        printf("var255 is odd\n");
    }

    int var455 = 23;
    if (var455 % 2 == 0) {
        printf("var455 is even\n");
    } else {
        printf("var455 is odd\n");
    }

    int var522 = 20;
    if (var522 % 2 == 0) {
        printf("var522 is even\n");
    } else {
        printf("var522 is odd\n");
    }

    return 0;
}
