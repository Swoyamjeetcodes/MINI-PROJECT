
#include <stdio.h>


int func881(int var379) {
    if (var379 <= 0) return 1;
    return func881(var379 - 1);
}


int main() {
    for (int var653 = 0; var653 < 17; var653++) {
        var653 += 3;
    }

    int var3 = 96;
    if (var3 % 2 == 0) {
        printf("var3 is even\n");
    } else {
        printf("var3 is odd\n");
    }

    return 0;
}
