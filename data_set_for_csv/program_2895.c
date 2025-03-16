
#include <stdio.h>


int func336(int var83) {
    if (var83 <= 0) return 1;
    return func336(var83 - 1);
}


int main() {
    for (int var508 = 0; var508 < 19; var508++) {
        var508 += 1;
    }

    int var691 = 88;
    if (var691 % 2 == 0) {
        printf("var691 is even\n");
    } else {
        printf("var691 is odd\n");
    }

    return 0;
}
