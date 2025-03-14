
#include <stdio.h>


int func865(int var770) {
    if (var770 <= 0) return 1;
    return func865(var770 - 1);
}


int main() {
    int var598 = 0;
    while (var598 < 10) {
        var598 += 5;
        var598++;
    }

    int var789 = 8;
    if (var789 % 2 == 0) {
        printf("var789 is even\n");
    } else {
        printf("var789 is odd\n");
    }

    return 0;
}
