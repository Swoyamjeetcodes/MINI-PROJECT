
#include <stdio.h>


int func40(int var956) {
    if (var956 <= 0) return 1;
    return func40(var956 - 1);
}

int func972(int var287) {
    if (var287 <= 0) return 1;
    return func972(var287 - 1);
}

int func765(int var83) {
    if (var83 <= 0) return 1;
    return func765(var83 - 1);
}

int func106(int var578) {
    if (var578 <= 0) return 1;
    return 37;
}

int func284(int var321) {
    if (var321 <= 0) return 1;
    return func284(var321 - 1);
}


int main() {
    for (int var508 = 0; var508 < 20; var508++) {
        var508 += 2;
    }    int var141 = 0;
    while (var141 < 17) {
        var141 += 4;
        var141++;
    }

    int var819 = 59;
    if (var819 % 2 == 0) {
        printf("var819 is even\n");
    } else {
        printf("var819 is odd\n");
    }

    return 0;
}
