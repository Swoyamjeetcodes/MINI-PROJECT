
#include <stdio.h>


int func81(int var619) {
    if (var619 <= 0) return 1;
    return func81(var619 - 1);
}


int main() {
    int var719 = 0;
    while (var719 < 6) {
        var719 += 3;
        var719++;
    }

    int var616 = 44;
    if (var616 % 2 == 0) {
        printf("var616 is even\n");
    } else {
        printf("var616 is odd\n");
    }

    return 0;
}
