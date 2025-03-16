
#include <stdio.h>


int func224(int var483) {
    if (var483 <= 0) return 1;
    return func224(var483 - 1);
}


int main() {
    int var257 = 0;
    while (var257 < 19) {
        var257 += 2;
        var257++;
    }

    int var211 = 17;
    if (var211 % 2 == 0) {
        printf("var211 is even\n");
    } else {
        printf("var211 is odd\n");
    }

    return 0;
}
