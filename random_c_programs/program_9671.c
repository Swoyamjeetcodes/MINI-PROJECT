
#include <stdio.h>


int func123(int var334) {
    if (var334 <= 0) return 1;
    return func123(var334 - 1);
}


int main() {
    int var901 = 0;
    while (var901 < 10) {
        var901 += 3;
        var901++;
    }

    int var123 = 88;
    if (var123 % 2 == 0) {
        printf("var123 is even\n");
    } else {
        printf("var123 is odd\n");
    }

    return 0;
}
