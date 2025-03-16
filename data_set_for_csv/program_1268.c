
#include <stdio.h>


int func24(int var712) {
    if (var712 <= 0) return 1;
    return func24(var712 - 1);
}


int main() {
    for (int var915 = 0; var915 < 13; var915++) {
        var915 += 5;
    }

    int var482 = 99;
    if (var482 % 2 == 0) {
        printf("var482 is even\n");
    } else {
        printf("var482 is odd\n");
    }

    return 0;
}
