
#include <stdio.h>


int func628(int var332) {
    if (var332 <= 0) return 1;
    return func628(var332 - 1);
}


int main() {
    for (int var304 = 0; var304 < 10; var304++) {
        var304 += 4;
    }

    int var626 = 22;
    if (var626 % 2 == 0) {
        printf("var626 is even\n");
    } else {
        printf("var626 is odd\n");
    }

    return 0;
}
