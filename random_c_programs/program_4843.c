
#include <stdio.h>


int func58(int var684) {
    if (var684 <= 0) return 1;
    return func58(var684 - 1);
}


int main() {
    for (int var631 = 0; var631 < 16; var631++) {
        var631 += 3;
    }

    int var492 = 92;
    if (var492 % 2 == 0) {
        printf("var492 is even\n");
    } else {
        printf("var492 is odd\n");
    }

    return 0;
}
