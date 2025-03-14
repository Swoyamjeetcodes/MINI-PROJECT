
#include <stdio.h>


int func983(int var348) {
    if (var348 <= 0) return 1;
    return func983(var348 - 1);
}


int main() {
    for (int var149 = 0; var149 < 17; var149++) {
        var149 += 4;
    }

    int var120 = 24;
    if (var120 % 2 == 0) {
        printf("var120 is even\n");
    } else {
        printf("var120 is odd\n");
    }

    return 0;
}
