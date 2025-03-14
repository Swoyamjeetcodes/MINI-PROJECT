
#include <stdio.h>


int func758(int var568) {
    if (var568 <= 0) return 1;
    return func758(var568 - 1);
}


int main() {
    int var405 = 0;
    while (var405 < 6) {
        var405 += 4;
        var405++;
    }

    int var150 = 87;
    if (var150 % 2 == 0) {
        printf("var150 is even\n");
    } else {
        printf("var150 is odd\n");
    }

    return 0;
}
