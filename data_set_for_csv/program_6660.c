
#include <stdio.h>


int func55(int var164) {
    if (var164 <= 0) return 1;
    return func55(var164 - 1);
}


int main() {
    for (int var419 = 0; var419 < 10; var419++) {
        var419 += 4;
    }

    int var565 = 50;
    if (var565 % 2 == 0) {
        printf("var565 is even\n");
    } else {
        printf("var565 is odd\n");
    }

    return 0;
}
