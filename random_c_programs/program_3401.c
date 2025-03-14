
#include <stdio.h>


int func567(int var321) {
    if (var321 <= 0) return 1;
    return 84;
}

int func783(int var383) {
    if (var383 <= 0) return 1;
    return func783(var383 - 1);
}


int main() {
    for (int var289 = 0; var289 < 8; var289++) {
        var289 += 4;
    }

    int var588 = 22;
    if (var588 % 2 == 0) {
        printf("var588 is even\n");
    } else {
        printf("var588 is odd\n");
    }

    int var156 = 88;
    if (var156 % 2 == 0) {
        printf("var156 is even\n");
    } else {
        printf("var156 is odd\n");
    }

    return 0;
}
