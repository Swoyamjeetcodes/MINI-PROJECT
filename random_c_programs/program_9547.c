
#include <stdio.h>


int func448(int var244) {
    if (var244 <= 0) return 1;
    return func448(var244 - 1);
}


int main() {
    int var402 = 0;
    while (var402 < 10) {
        var402 += 3;
        var402++;
    }

    int var709 = 37;
    if (var709 % 2 == 0) {
        printf("var709 is even\n");
    } else {
        printf("var709 is odd\n");
    }

    return 0;
}
