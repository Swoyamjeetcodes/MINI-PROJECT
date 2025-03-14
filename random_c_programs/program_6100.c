
#include <stdio.h>


int func237(int var259) {
    if (var259 <= 0) return 1;
    return func237(var259 - 1);
}


int main() {
    for (int var160 = 0; var160 < 9; var160++) {
        var160 += 3;
    }

    int var406 = 62;
    if (var406 % 2 == 0) {
        printf("var406 is even\n");
    } else {
        printf("var406 is odd\n");
    }

    return 0;
}
