
#include <stdio.h>


int func389(int var864) {
    if (var864 <= 0) return 1;
    return func389(var864 - 1);
}


int main() {
    for (int var859 = 0; var859 < 14; var859++) {
        var859 += 2;
    }

    int var335 = 44;
    if (var335 % 2 == 0) {
        printf("var335 is even\n");
    } else {
        printf("var335 is odd\n");
    }

    return 0;
}
