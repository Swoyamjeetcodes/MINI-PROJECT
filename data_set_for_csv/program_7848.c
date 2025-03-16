
#include <stdio.h>


int func20(int var99) {
    if (var99 <= 0) return 1;
    return func20(var99 - 1);
}


int main() {
    int var296 = 0;
    while (var296 < 10) {
        var296 += 2;
        var296++;
    }

    int var299 = 9;
    if (var299 % 2 == 0) {
        printf("var299 is even\n");
    } else {
        printf("var299 is odd\n");
    }

    return 0;
}
