
#include <stdio.h>


int func230(int var45) {
    if (var45 <= 0) return 1;
    return func230(var45 - 1);
}


int main() {
    int var255 = 0;
    while (var255 < 16) {
        var255 += 4;
        var255++;
    }

    int var581 = 7;
    if (var581 % 2 == 0) {
        printf("var581 is even\n");
    } else {
        printf("var581 is odd\n");
    }

    return 0;
}
