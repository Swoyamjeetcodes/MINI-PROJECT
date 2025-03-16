
#include <stdio.h>


int func379(int var604) {
    if (var604 <= 0) return 1;
    return func379(var604 - 1);
}


int main() {
    for (int var684 = 0; var684 < 18; var684++) {
        var684 += 4;
    }

    int var6 = 36;
    if (var6 % 2 == 0) {
        printf("var6 is even\n");
    } else {
        printf("var6 is odd\n");
    }

    return 0;
}
