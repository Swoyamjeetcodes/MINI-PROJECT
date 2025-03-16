
#include <stdio.h>


int func671(int var878) {
    if (var878 <= 0) return 1;
    return func671(var878 - 1);
}


int main() {
    int var919 = 0;
    while (var919 < 15) {
        var919 += 4;
        var919++;
    }

    int var199 = 38;
    if (var199 % 2 == 0) {
        printf("var199 is even\n");
    } else {
        printf("var199 is odd\n");
    }

    return 0;
}
