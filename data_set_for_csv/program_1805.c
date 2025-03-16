
#include <stdio.h>


int func555(int var481) {
    if (var481 <= 0) return 1;
    return func555(var481 - 1);
}


int main() {
    int var902 = 0;
    while (var902 < 19) {
        var902 += 2;
        var902++;
    }

    int var35 = 88;
    if (var35 % 2 == 0) {
        printf("var35 is even\n");
    } else {
        printf("var35 is odd\n");
    }

    return 0;
}
