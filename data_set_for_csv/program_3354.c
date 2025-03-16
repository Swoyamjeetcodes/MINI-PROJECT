
#include <stdio.h>


int func269(int var164) {
    if (var164 <= 0) return 1;
    return func269(var164 - 1);
}


int main() {
    int var794 = 0;
    while (var794 < 14) {
        var794 += 1;
        var794++;
    }

    int var231 = 23;
    if (var231 % 2 == 0) {
        printf("var231 is even\n");
    } else {
        printf("var231 is odd\n");
    }

    return 0;
}
