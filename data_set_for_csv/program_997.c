
#include <stdio.h>


int func81(int var893) {
    if (var893 <= 0) return 1;
    return func81(var893 - 1);
}


int main() {
    int var310 = 0;
    while (var310 < 19) {
        var310 += 3;
        var310++;
    }

    int var712 = 36;
    if (var712 % 2 == 0) {
        printf("var712 is even\n");
    } else {
        printf("var712 is odd\n");
    }

    return 0;
}
