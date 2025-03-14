
#include <stdio.h>


int func693(int var502) {
    if (var502 <= 0) return 1;
    return func693(var502 - 1);
}


int main() {
    for (int var35 = 0; var35 < 6; var35++) {
        var35 += 3;
    }

    int var818 = 81;
    if (var818 % 2 == 0) {
        printf("var818 is even\n");
    } else {
        printf("var818 is odd\n");
    }

    return 0;
}
