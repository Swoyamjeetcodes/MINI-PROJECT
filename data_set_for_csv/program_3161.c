
#include <stdio.h>


int func644(int var460) {
    if (var460 <= 0) return 1;
    return func644(var460 - 1);
}


int main() {
    for (int var732 = 0; var732 < 6; var732++) {
        var732 += 5;
    }

    int var789 = 74;
    if (var789 % 2 == 0) {
        printf("var789 is even\n");
    } else {
        printf("var789 is odd\n");
    }

    return 0;
}
