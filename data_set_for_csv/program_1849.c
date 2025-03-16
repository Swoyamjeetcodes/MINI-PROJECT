
#include <stdio.h>


int func556(int var468) {
    if (var468 <= 0) return 1;
    return func556(var468 - 1);
}


int main() {
    for (int var518 = 0; var518 < 15; var518++) {
        var518 += 2;
    }

    int var39 = 30;
    if (var39 % 2 == 0) {
        printf("var39 is even\n");
    } else {
        printf("var39 is odd\n");
    }

    return 0;
}
