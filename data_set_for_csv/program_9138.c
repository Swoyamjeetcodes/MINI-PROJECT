
#include <stdio.h>


int func630(int var776) {
    if (var776 <= 0) return 1;
    return func630(var776 - 1);
}


int main() {
    int var528 = 0;
    while (var528 < 8) {
        var528 += 1;
        var528++;
    }

    int var510 = 55;
    if (var510 % 2 == 0) {
        printf("var510 is even\n");
    } else {
        printf("var510 is odd\n");
    }

    return 0;
}
