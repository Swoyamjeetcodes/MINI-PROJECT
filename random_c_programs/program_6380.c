
#include <stdio.h>


int func520(int var523) {
    if (var523 <= 0) return 1;
    return func520(var523 - 1);
}


int main() {
    int var270 = 0;
    while (var270 < 15) {
        var270 += 1;
        var270++;
    }

    int var598 = 52;
    if (var598 % 2 == 0) {
        printf("var598 is even\n");
    } else {
        printf("var598 is odd\n");
    }

    return 0;
}
