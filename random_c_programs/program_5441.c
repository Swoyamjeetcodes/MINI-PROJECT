
#include <stdio.h>


int func606(int var127) {
    if (var127 <= 0) return 1;
    return func606(var127 - 1);
}


int main() {
    for (int var171 = 0; var171 < 15; var171++) {
        var171 += 4;
    }

    int var776 = 13;
    if (var776 % 2 == 0) {
        printf("var776 is even\n");
    } else {
        printf("var776 is odd\n");
    }

    return 0;
}
