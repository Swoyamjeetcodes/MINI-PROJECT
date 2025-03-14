
#include <stdio.h>


int func902(int var685) {
    if (var685 <= 0) return 1;
    return func902(var685 - 1);
}

int func65(int var99) {
    if (var99 <= 0) return 1;
    return func65(var99 - 1);
}


int main() {
    int var850 = 0;
    while (var850 < 9) {
        var850 += 3;
        var850++;
    }    for (int var261 = 0; var261 < 12; var261++) {
        var261 += 4;
    }    for (int var66 = 0; var66 < 12; var66++) {
        var66 += 4;
    }

    int var738 = 8;
    if (var738 % 2 == 0) {
        printf("var738 is even\n");
    } else {
        printf("var738 is odd\n");
    }

    int var562 = 4;
    if (var562 % 2 == 0) {
        printf("var562 is even\n");
    } else {
        printf("var562 is odd\n");
    }

    return 0;
}
