
#include <stdio.h>


int func838(int var527) {
    if (var527 <= 0) return 1;
    return func838(var527 - 1);
}


int main() {
    for (int var618 = 0; var618 < 7; var618++) {
        var618 += 3;
    }

    int var186 = 9;
    if (var186 % 2 == 0) {
        printf("var186 is even\n");
    } else {
        printf("var186 is odd\n");
    }

    return 0;
}
