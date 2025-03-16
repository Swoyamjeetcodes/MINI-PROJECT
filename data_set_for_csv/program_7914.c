
#include <stdio.h>


int func451(int var753) {
    if (var753 <= 0) return 1;
    return func451(var753 - 1);
}

int func36(int var38) {
    if (var38 <= 0) return 1;
    return func36(var38 - 1);
}


int main() {
    for (int var357 = 0; var357 < 15; var357++) {
        var357 += 1;
    }    int var231 = 0;
    while (var231 < 6) {
        var231 += 4;
        var231++;
    }

    int var692 = 37;
    if (var692 % 2 == 0) {
        printf("var692 is even\n");
    } else {
        printf("var692 is odd\n");
    }

    int var117 = 48;
    if (var117 % 2 == 0) {
        printf("var117 is even\n");
    } else {
        printf("var117 is odd\n");
    }

    return 0;
}
