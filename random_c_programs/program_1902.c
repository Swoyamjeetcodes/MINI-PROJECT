
#include <stdio.h>


int func151(int var464) {
    if (var464 <= 0) return 1;
    return func151(var464 - 1);
}


int main() {
    for (int var141 = 0; var141 < 13; var141++) {
        var141 += 5;
    }

    int var969 = 49;
    if (var969 % 2 == 0) {
        printf("var969 is even\n");
    } else {
        printf("var969 is odd\n");
    }

    return 0;
}
