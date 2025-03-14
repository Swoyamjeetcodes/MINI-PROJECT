
#include <stdio.h>


int func403(int var391) {
    if (var391 <= 0) return 1;
    return func403(var391 - 1);
}


int main() {
    int var384 = 0;
    while (var384 < 19) {
        var384 += 4;
        var384++;
    }    int var14 = 0;
    while (var14 < 9) {
        var14 += 2;
        var14++;
    }

    int var702 = 9;
    if (var702 % 2 == 0) {
        printf("var702 is even\n");
    } else {
        printf("var702 is odd\n");
    }

    int var233 = 38;
    if (var233 % 2 == 0) {
        printf("var233 is even\n");
    } else {
        printf("var233 is odd\n");
    }

    return 0;
}
