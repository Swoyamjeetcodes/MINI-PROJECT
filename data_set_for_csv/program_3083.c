
#include <stdio.h>


int func903(int var618) {
    if (var618 <= 0) return 1;
    return func903(var618 - 1);
}


int main() {
    for (int var293 = 0; var293 < 20; var293++) {
        var293 += 2;
    }

    int var970 = 67;
    if (var970 % 2 == 0) {
        printf("var970 is even\n");
    } else {
        printf("var970 is odd\n");
    }

    return 0;
}
