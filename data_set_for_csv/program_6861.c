
#include <stdio.h>


int func443(int var272) {
    if (var272 <= 0) return 1;
    return func443(var272 - 1);
}


int main() {
    int var502 = 0;
    while (var502 < 8) {
        var502 += 1;
        var502++;
    }

    int var74 = 67;
    if (var74 % 2 == 0) {
        printf("var74 is even\n");
    } else {
        printf("var74 is odd\n");
    }

    return 0;
}
