
#include <stdio.h>


int func219(int var869) {
    if (var869 <= 0) return 1;
    return func219(var869 - 1);
}


int main() {
    int var370 = 0;
    while (var370 < 14) {
        var370 += 1;
        var370++;
    }

    int var733 = 65;
    if (var733 % 2 == 0) {
        printf("var733 is even\n");
    } else {
        printf("var733 is odd\n");
    }

    return 0;
}
