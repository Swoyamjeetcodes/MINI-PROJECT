
#include <stdio.h>


int func616(int var256) {
    if (var256 <= 0) return 1;
    return func616(var256 - 1);
}

int func503(int var919) {
    if (var919 <= 0) return 1;
    return func503(var919 - 1);
}


int main() {
    int var15 = 0;
    while (var15 < 19) {
        var15 += 4;
        var15++;
    }    int var255 = 0;
    while (var255 < 16) {
        var255 += 4;
        var255++;
    }

    int var314 = 28;
    if (var314 % 2 == 0) {
        printf("var314 is even\n");
    } else {
        printf("var314 is odd\n");
    }

    return 0;
}
