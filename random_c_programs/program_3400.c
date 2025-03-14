
#include <stdio.h>


int func665(int var83) {
    if (var83 <= 0) return 1;
    return func665(var83 - 1);
}


int main() {
    int var121 = 0;
    while (var121 < 16) {
        var121 += 4;
        var121++;
    }

    int var340 = 23;
    if (var340 % 2 == 0) {
        printf("var340 is even\n");
    } else {
        printf("var340 is odd\n");
    }

    return 0;
}
