
#include <stdio.h>


int func276(int var728) {
    if (var728 <= 0) return 1;
    return func276(var728 - 1);
}


int main() {
    for (int var199 = 0; var199 < 19; var199++) {
        var199 += 4;
    }

    int var704 = 68;
    if (var704 % 2 == 0) {
        printf("var704 is even\n");
    } else {
        printf("var704 is odd\n");
    }

    return 0;
}
