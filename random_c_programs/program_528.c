
#include <stdio.h>


int func966(int var230) {
    if (var230 <= 0) return 1;
    return func966(var230 - 1);
}


int main() {
    for (int var80 = 0; var80 < 12; var80++) {
        var80 += 5;
    }

    int var502 = 58;
    if (var502 % 2 == 0) {
        printf("var502 is even\n");
    } else {
        printf("var502 is odd\n");
    }

    return 0;
}
