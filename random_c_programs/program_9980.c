
#include <stdio.h>


int func67(int var58) {
    if (var58 <= 0) return 1;
    return func67(var58 - 1);
}


int main() {
    for (int var614 = 0; var614 < 15; var614++) {
        var614 += 3;
    }

    int var42 = 100;
    if (var42 % 2 == 0) {
        printf("var42 is even\n");
    } else {
        printf("var42 is odd\n");
    }

    return 0;
}
