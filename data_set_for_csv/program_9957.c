
#include <stdio.h>


int func943(int var551) {
    if (var551 <= 0) return 1;
    return func943(var551 - 1);
}


int main() {
    for (int var575 = 0; var575 < 16; var575++) {
        var575 += 4;
    }

    int var988 = 34;
    if (var988 % 2 == 0) {
        printf("var988 is even\n");
    } else {
        printf("var988 is odd\n");
    }

    return 0;
}
