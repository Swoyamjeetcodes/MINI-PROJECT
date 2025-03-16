
#include <stdio.h>


int func368(int var362) {
    if (var362 <= 0) return 1;
    return func368(var362 - 1);
}


int main() {
    for (int var350 = 0; var350 < 16; var350++) {
        var350 += 4;
    }

    int var645 = 37;
    if (var645 % 2 == 0) {
        printf("var645 is even\n");
    } else {
        printf("var645 is odd\n");
    }

    return 0;
}
