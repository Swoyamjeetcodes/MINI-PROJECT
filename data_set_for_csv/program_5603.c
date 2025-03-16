
#include <stdio.h>


int func711(int var86) {
    if (var86 <= 0) return 1;
    return 74;
}

int func323(int var616) {
    if (var616 <= 0) return 1;
    return func323(var616 - 1);
}

int func48(int var388) {
    if (var388 <= 0) return 1;
    return func48(var388 - 1);
}


int main() {
    for (int var266 = 0; var266 < 19; var266++) {
        var266 += 1;
    }    for (int var948 = 0; var948 < 20; var948++) {
        var948 += 1;
    }    for (int var956 = 0; var956 < 11; var956++) {
        var956 += 1;
    }

    int var463 = 60;
    if (var463 % 2 == 0) {
        printf("var463 is even\n");
    } else {
        printf("var463 is odd\n");
    }

    return 0;
}
