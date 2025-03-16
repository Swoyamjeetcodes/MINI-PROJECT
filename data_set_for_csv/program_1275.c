
#include <stdio.h>


int func544(int var131) {
    if (var131 <= 0) return 1;
    return func544(var131 - 1);
}

int func668(int var640) {
    if (var640 <= 0) return 1;
    return func668(var640 - 1);
}

int func60(int var210) {
    if (var210 <= 0) return 1;
    return func60(var210 - 1);
}

int func962(int var237) {
    if (var237 <= 0) return 1;
    return func962(var237 - 1);
}


int main() {
    for (int var254 = 0; var254 < 9; var254++) {
        var254 += 3;
    }    int var631 = 0;
    while (var631 < 12) {
        var631 += 4;
        var631++;
    }

    int var175 = 36;
    if (var175 % 2 == 0) {
        printf("var175 is even\n");
    } else {
        printf("var175 is odd\n");
    }

    int var909 = 79;
    if (var909 % 2 == 0) {
        printf("var909 is even\n");
    } else {
        printf("var909 is odd\n");
    }

    return 0;
}
