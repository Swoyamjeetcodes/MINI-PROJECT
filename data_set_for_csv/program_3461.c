
#include <stdio.h>


int func684(int var794) {
    if (var794 <= 0) return 1;
    return func684(var794 - 1);
}


int main() {
    int var367 = 0;
    while (var367 < 14) {
        var367 += 2;
        var367++;
    }

    int var719 = 41;
    if (var719 % 2 == 0) {
        printf("var719 is even\n");
    } else {
        printf("var719 is odd\n");
    }

    return 0;
}
