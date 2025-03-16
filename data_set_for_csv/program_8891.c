
#include <stdio.h>


int func690(int var632) {
    if (var632 <= 0) return 1;
    return func690(var632 - 1);
}


int main() {
    int var383 = 0;
    while (var383 < 19) {
        var383 += 3;
        var383++;
    }

    int var317 = 36;
    if (var317 % 2 == 0) {
        printf("var317 is even\n");
    } else {
        printf("var317 is odd\n");
    }

    return 0;
}
