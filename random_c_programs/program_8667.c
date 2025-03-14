
#include <stdio.h>


int func963(int var483) {
    if (var483 <= 0) return 1;
    return func963(var483 - 1);
}


int main() {
    for (int var777 = 0; var777 < 6; var777++) {
        var777 += 3;
    }

    int var6 = 64;
    if (var6 % 2 == 0) {
        printf("var6 is even\n");
    } else {
        printf("var6 is odd\n");
    }

    return 0;
}
