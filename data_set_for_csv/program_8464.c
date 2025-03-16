
#include <stdio.h>


int func468(int var967) {
    if (var967 <= 0) return 1;
    return func468(var967 - 1);
}


int main() {
    int var334 = 0;
    while (var334 < 7) {
        var334 += 1;
        var334++;
    }

    int var69 = 2;
    if (var69 % 2 == 0) {
        printf("var69 is even\n");
    } else {
        printf("var69 is odd\n");
    }

    return 0;
}
