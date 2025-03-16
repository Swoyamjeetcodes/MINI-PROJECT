
#include <stdio.h>


int func187(int var425) {
    if (var425 <= 0) return 1;
    return func187(var425 - 1);
}


int main() {
    int var794 = 0;
    while (var794 < 8) {
        var794 += 3;
        var794++;
    }

    int var618 = 97;
    if (var618 % 2 == 0) {
        printf("var618 is even\n");
    } else {
        printf("var618 is odd\n");
    }

    return 0;
}
