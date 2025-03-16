
#include <stdio.h>


int func402(int var867) {
    if (var867 <= 0) return 1;
    return func402(var867 - 1);
}

int func827(int var61) {
    if (var61 <= 0) return 1;
    return func827(var61 - 1);
}

int func567(int var58) {
    if (var58 <= 0) return 1;
    return 63;
}

int func590(int var671) {
    if (var671 <= 0) return 1;
    return func590(var671 - 1);
}


int main() {
    int var735 = 0;
    while (var735 < 17) {
        var735 += 1;
        var735++;
    }    int var469 = 0;
    while (var469 < 11) {
        var469 += 3;
        var469++;
    }

    int var500 = 40;
    if (var500 % 2 == 0) {
        printf("var500 is even\n");
    } else {
        printf("var500 is odd\n");
    }

    int var655 = 50;
    if (var655 % 2 == 0) {
        printf("var655 is even\n");
    } else {
        printf("var655 is odd\n");
    }

    int var128 = 66;
    if (var128 % 2 == 0) {
        printf("var128 is even\n");
    } else {
        printf("var128 is odd\n");
    }

    return 0;
}
