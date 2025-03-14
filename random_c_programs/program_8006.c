
#include <stdio.h>


int func564(int var301) {
    if (var301 <= 0) return 1;
    return func564(var301 - 1);
}


int main() {
    int var34 = 0;
    while (var34 < 16) {
        var34 += 4;
        var34++;
    }

    int var690 = 59;
    if (var690 % 2 == 0) {
        printf("var690 is even\n");
    } else {
        printf("var690 is odd\n");
    }

    return 0;
}
