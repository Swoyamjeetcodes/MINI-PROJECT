
#include <stdio.h>


int func65(int var140) {
    if (var140 <= 0) return 1;
    return func65(var140 - 1);
}


int main() {
    for (int var50 = 0; var50 < 7; var50++) {
        var50 += 4;
    }

    int var353 = 47;
    if (var353 % 2 == 0) {
        printf("var353 is even\n");
    } else {
        printf("var353 is odd\n");
    }

    return 0;
}
