
#include <stdio.h>


int func966(int var572) {
    if (var572 <= 0) return 1;
    return func966(var572 - 1);
}


int main() {
    for (int var464 = 0; var464 < 8; var464++) {
        var464 += 4;
    }

    int var111 = 40;
    if (var111 % 2 == 0) {
        printf("var111 is even\n");
    } else {
        printf("var111 is odd\n");
    }

    return 0;
}
