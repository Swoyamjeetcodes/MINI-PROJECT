
#include <stdio.h>


int func772(int var790) {
    if (var790 <= 0) return 1;
    return func772(var790 - 1);
}


int main() {
    int var685 = 0;
    while (var685 < 16) {
        var685 += 3;
        var685++;
    }

    int var651 = 32;
    if (var651 % 2 == 0) {
        printf("var651 is even\n");
    } else {
        printf("var651 is odd\n");
    }

    return 0;
}
