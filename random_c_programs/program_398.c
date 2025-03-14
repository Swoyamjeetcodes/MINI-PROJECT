
#include <stdio.h>


int func820(int var234) {
    if (var234 <= 0) return 1;
    return func820(var234 - 1);
}


int main() {
    for (int var793 = 0; var793 < 14; var793++) {
        var793 += 3;
    }

    int var418 = 93;
    if (var418 % 2 == 0) {
        printf("var418 is even\n");
    } else {
        printf("var418 is odd\n");
    }

    return 0;
}
