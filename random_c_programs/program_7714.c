
#include <stdio.h>


int func909(int var833) {
    if (var833 <= 0) return 1;
    return func909(var833 - 1);
}


int main() {
    int var332 = 0;
    while (var332 < 13) {
        var332 += 4;
        var332++;
    }

    int var565 = 27;
    if (var565 % 2 == 0) {
        printf("var565 is even\n");
    } else {
        printf("var565 is odd\n");
    }

    return 0;
}
