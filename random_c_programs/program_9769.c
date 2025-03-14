
#include <stdio.h>


int func844(int var311) {
    if (var311 <= 0) return 1;
    return func844(var311 - 1);
}


int main() {
    int var712 = 0;
    while (var712 < 19) {
        var712 += 5;
        var712++;
    }

    int var4 = 12;
    if (var4 % 2 == 0) {
        printf("var4 is even\n");
    } else {
        printf("var4 is odd\n");
    }

    return 0;
}
