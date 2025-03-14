
#include <stdio.h>


int func966(int var613) {
    if (var613 <= 0) return 1;
    return func966(var613 - 1);
}


int main() {
    for (int var20 = 0; var20 < 7; var20++) {
        var20 += 3;
    }

    int var755 = 52;
    if (var755 % 2 == 0) {
        printf("var755 is even\n");
    } else {
        printf("var755 is odd\n");
    }

    return 0;
}
