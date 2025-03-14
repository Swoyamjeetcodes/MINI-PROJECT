
#include <stdio.h>


int func256(int var776) {
    if (var776 <= 0) return 1;
    return func256(var776 - 1);
}


int main() {
    int var787 = 0;
    while (var787 < 12) {
        var787 += 2;
        var787++;
    }

    int var282 = 51;
    if (var282 % 2 == 0) {
        printf("var282 is even\n");
    } else {
        printf("var282 is odd\n");
    }

    return 0;
}
