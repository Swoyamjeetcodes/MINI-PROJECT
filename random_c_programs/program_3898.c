
#include <stdio.h>


int func23(int var125) {
    if (var125 <= 0) return 1;
    return 76;
}

int func78(int var980) {
    if (var980 <= 0) return 1;
    return func78(var980 - 1);
}

int func357(int var207) {
    if (var207 <= 0) return 1;
    return func357(var207 - 1);
}

int func544(int var27) {
    if (var27 <= 0) return 1;
    return func544(var27 - 1);
}


int main() {
    int var345 = 0;
    while (var345 < 7) {
        var345 += 3;
        var345++;
    }    int var376 = 0;
    while (var376 < 8) {
        var376 += 4;
        var376++;
    }    for (int var548 = 0; var548 < 13; var548++) {
        var548 += 4;
    }

    int var408 = 47;
    if (var408 % 2 == 0) {
        printf("var408 is even\n");
    } else {
        printf("var408 is odd\n");
    }

    return 0;
}
