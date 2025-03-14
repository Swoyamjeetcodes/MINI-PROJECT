
#include <stdio.h>


int func721(int var946) {
    if (var946 <= 0) return 1;
    return func721(var946 - 1);
}


int main() {
    for (int var881 = 0; var881 < 12; var881++) {
        var881 += 4;
    }

    int var466 = 70;
    if (var466 % 2 == 0) {
        printf("var466 is even\n");
    } else {
        printf("var466 is odd\n");
    }

    return 0;
}
