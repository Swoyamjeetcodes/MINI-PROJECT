
#include <stdio.h>


int func483(int var790) {
    if (var790 <= 0) return 1;
    return func483(var790 - 1);
}


int main() {
    for (int var408 = 0; var408 < 6; var408++) {
        var408 += 4;
    }

    int var930 = 71;
    if (var930 % 2 == 0) {
        printf("var930 is even\n");
    } else {
        printf("var930 is odd\n");
    }

    return 0;
}
