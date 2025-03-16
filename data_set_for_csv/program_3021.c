
#include <stdio.h>


int func123(int var95) {
    if (var95 <= 0) return 1;
    return func123(var95 - 1);
}


int main() {
    for (int var796 = 0; var796 < 16; var796++) {
        var796 += 1;
    }

    int var303 = 61;
    if (var303 % 2 == 0) {
        printf("var303 is even\n");
    } else {
        printf("var303 is odd\n");
    }

    return 0;
}
