
#include <stdio.h>


int func892(int var357) {
    if (var357 <= 0) return 1;
    return func892(var357 - 1);
}


int main() {
    for (int var291 = 0; var291 < 8; var291++) {
        var291 += 1;
    }

    int var523 = 40;
    if (var523 % 2 == 0) {
        printf("var523 is even\n");
    } else {
        printf("var523 is odd\n");
    }

    return 0;
}
