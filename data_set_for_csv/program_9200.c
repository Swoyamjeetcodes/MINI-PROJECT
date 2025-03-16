
#include <stdio.h>


int func380(int var560) {
    if (var560 <= 0) return 1;
    return func380(var560 - 1);
}


int main() {
    int var994 = 0;
    while (var994 < 16) {
        var994 += 1;
        var994++;
    }

    int var932 = 63;
    if (var932 % 2 == 0) {
        printf("var932 is even\n");
    } else {
        printf("var932 is odd\n");
    }

    return 0;
}
