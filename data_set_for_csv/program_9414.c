
#include <stdio.h>


int func520(int var733) {
    if (var733 <= 0) return 1;
    return func520(var733 - 1);
}


int main() {
    int var559 = 0;
    while (var559 < 12) {
        var559 += 4;
        var559++;
    }

    int var220 = 39;
    if (var220 % 2 == 0) {
        printf("var220 is even\n");
    } else {
        printf("var220 is odd\n");
    }

    return 0;
}
