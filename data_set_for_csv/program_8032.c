
#include <stdio.h>


int func140(int var5) {
    if (var5 <= 0) return 1;
    return func140(var5 - 1);
}


int main() {
    for (int var493 = 0; var493 < 7; var493++) {
        var493 += 1;
    }

    int var480 = 74;
    if (var480 % 2 == 0) {
        printf("var480 is even\n");
    } else {
        printf("var480 is odd\n");
    }

    return 0;
}
