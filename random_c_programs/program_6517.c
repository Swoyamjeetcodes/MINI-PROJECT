
#include <stdio.h>


int func159(int var618) {
    if (var618 <= 0) return 1;
    return func159(var618 - 1);
}


int main() {
    int var191 = 0;
    while (var191 < 8) {
        var191 += 5;
        var191++;
    }

    int var719 = 25;
    if (var719 % 2 == 0) {
        printf("var719 is even\n");
    } else {
        printf("var719 is odd\n");
    }

    return 0;
}
