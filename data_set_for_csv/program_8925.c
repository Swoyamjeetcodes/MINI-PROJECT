
#include <stdio.h>


int func639(int var912) {
    if (var912 <= 0) return 1;
    return func639(var912 - 1);
}


int main() {
    int var214 = 0;
    while (var214 < 7) {
        var214 += 3;
        var214++;
    }

    int var864 = 73;
    if (var864 % 2 == 0) {
        printf("var864 is even\n");
    } else {
        printf("var864 is odd\n");
    }

    return 0;
}
