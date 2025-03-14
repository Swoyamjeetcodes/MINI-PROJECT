
#include <stdio.h>


int func903(int var367) {
    if (var367 <= 0) return 1;
    return func903(var367 - 1);
}


int main() {
    int var461 = 0;
    while (var461 < 12) {
        var461 += 1;
        var461++;
    }

    int var92 = 73;
    if (var92 % 2 == 0) {
        printf("var92 is even\n");
    } else {
        printf("var92 is odd\n");
    }

    return 0;
}
