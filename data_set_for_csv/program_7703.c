
#include <stdio.h>


int func494(int var342) {
    if (var342 <= 0) return 1;
    return func494(var342 - 1);
}


int main() {
    for (int var623 = 0; var623 < 16; var623++) {
        var623 += 3;
    }

    int var864 = 52;
    if (var864 % 2 == 0) {
        printf("var864 is even\n");
    } else {
        printf("var864 is odd\n");
    }

    return 0;
}
