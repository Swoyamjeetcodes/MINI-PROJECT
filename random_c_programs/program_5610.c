
#include <stdio.h>


int func35(int var141) {
    if (var141 <= 0) return 1;
    return func35(var141 - 1);
}


int main() {
    for (int var283 = 0; var283 < 15; var283++) {
        var283 += 5;
    }

    int var614 = 24;
    if (var614 % 2 == 0) {
        printf("var614 is even\n");
    } else {
        printf("var614 is odd\n");
    }

    return 0;
}
