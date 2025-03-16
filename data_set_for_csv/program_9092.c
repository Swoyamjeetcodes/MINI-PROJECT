
#include <stdio.h>


int func162(int var644) {
    if (var644 <= 0) return 1;
    return func162(var644 - 1);
}


int main() {
    int var519 = 0;
    while (var519 < 15) {
        var519 += 4;
        var519++;
    }

    int var351 = 44;
    if (var351 % 2 == 0) {
        printf("var351 is even\n");
    } else {
        printf("var351 is odd\n");
    }

    int var633 = 23;
    if (var633 % 2 == 0) {
        printf("var633 is even\n");
    } else {
        printf("var633 is odd\n");
    }

    int var288 = 33;
    if (var288 % 2 == 0) {
        printf("var288 is even\n");
    } else {
        printf("var288 is odd\n");
    }

    return 0;
}
