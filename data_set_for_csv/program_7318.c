
#include <stdio.h>


int func73(int var946) {
    if (var946 <= 0) return 1;
    return func73(var946 - 1);
}


int main() {
    int var747 = 0;
    while (var747 < 19) {
        var747 += 5;
        var747++;
    }

    int var358 = 23;
    if (var358 % 2 == 0) {
        printf("var358 is even\n");
    } else {
        printf("var358 is odd\n");
    }

    return 0;
}
