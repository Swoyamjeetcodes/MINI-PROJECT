
#include <stdio.h>


int func296(int var618) {
    if (var618 <= 0) return 1;
    return func296(var618 - 1);
}


int main() {
    for (int var709 = 0; var709 < 5; var709++) {
        var709 += 5;
    }

    int var567 = 64;
    if (var567 % 2 == 0) {
        printf("var567 is even\n");
    } else {
        printf("var567 is odd\n");
    }

    return 0;
}
