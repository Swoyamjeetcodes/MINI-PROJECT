
#include <stdio.h>


int func823(int var248) {
    if (var248 <= 0) return 1;
    return func823(var248 - 1);
}


int main() {
    int var948 = 0;
    while (var948 < 19) {
        var948 += 2;
        var948++;
    }

    int var257 = 24;
    if (var257 % 2 == 0) {
        printf("var257 is even\n");
    } else {
        printf("var257 is odd\n");
    }

    return 0;
}
