
#include <stdio.h>


int func307(int var58) {
    if (var58 <= 0) return 1;
    return func307(var58 - 1);
}


int main() {
    for (int var355 = 0; var355 < 14; var355++) {
        var355 += 4;
    }

    int var369 = 74;
    if (var369 % 2 == 0) {
        printf("var369 is even\n");
    } else {
        printf("var369 is odd\n");
    }

    return 0;
}
