
#include <stdio.h>


int func670(int var427) {
    if (var427 <= 0) return 1;
    return func670(var427 - 1);
}


int main() {
    int var766 = 0;
    while (var766 < 6) {
        var766 += 2;
        var766++;
    }

    int var600 = 87;
    if (var600 % 2 == 0) {
        printf("var600 is even\n");
    } else {
        printf("var600 is odd\n");
    }

    return 0;
}
