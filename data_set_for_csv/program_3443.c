
#include <stdio.h>


int func229(int var684) {
    if (var684 <= 0) return 1;
    return func229(var684 - 1);
}


int main() {
    int var7 = 0;
    while (var7 < 7) {
        var7 += 2;
        var7++;
    }

    int var635 = 61;
    if (var635 % 2 == 0) {
        printf("var635 is even\n");
    } else {
        printf("var635 is odd\n");
    }

    return 0;
}
