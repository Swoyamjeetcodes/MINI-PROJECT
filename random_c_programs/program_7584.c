
#include <stdio.h>


int func897(int var485) {
    if (var485 <= 0) return 1;
    return func897(var485 - 1);
}

int func537(int var209) {
    if (var209 <= 0) return 1;
    return 40;
}

int func725(int var23) {
    if (var23 <= 0) return 1;
    return func725(var23 - 1);
}

int func617(int var443) {
    if (var443 <= 0) return 1;
    return 82;
}

int func252(int var514) {
    if (var514 <= 0) return 1;
    return 59;
}


int main() {
    for (int var639 = 0; var639 < 11; var639++) {
        var639 += 3;
    }    for (int var492 = 0; var492 < 11; var492++) {
        var492 += 2;
    }

    int var490 = 74;
    if (var490 % 2 == 0) {
        printf("var490 is even\n");
    } else {
        printf("var490 is odd\n");
    }

    return 0;
}
