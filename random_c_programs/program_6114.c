
#include <stdio.h>


int func208(int var357) {
    if (var357 <= 0) return 1;
    return func208(var357 - 1);
}


int main() {
    int var311 = 0;
    while (var311 < 17) {
        var311 += 4;
        var311++;
    }

    int var380 = 45;
    if (var380 % 2 == 0) {
        printf("var380 is even\n");
    } else {
        printf("var380 is odd\n");
    }

    return 0;
}
