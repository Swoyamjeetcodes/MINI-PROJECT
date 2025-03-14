
#include <stdio.h>


int func13(int var576) {
    if (var576 <= 0) return 1;
    return func13(var576 - 1);
}


int main() {
    int var24 = 0;
    while (var24 < 15) {
        var24 += 2;
        var24++;
    }

    int var124 = 83;
    if (var124 % 2 == 0) {
        printf("var124 is even\n");
    } else {
        printf("var124 is odd\n");
    }

    return 0;
}
