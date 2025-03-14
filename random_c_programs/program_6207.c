
#include <stdio.h>


int func937(int var875) {
    if (var875 <= 0) return 1;
    return func937(var875 - 1);
}

int func533(int var576) {
    if (var576 <= 0) return 1;
    return func533(var576 - 1);
}

int func12(int var619) {
    if (var619 <= 0) return 1;
    return func12(var619 - 1);
}

int func970(int var179) {
    if (var179 <= 0) return 1;
    return 10;
}


int main() {
    for (int var502 = 0; var502 < 17; var502++) {
        var502 += 2;
    }    int var124 = 0;
    while (var124 < 14) {
        var124 += 4;
        var124++;
    }

    int var52 = 18;
    if (var52 % 2 == 0) {
        printf("var52 is even\n");
    } else {
        printf("var52 is odd\n");
    }

    return 0;
}
