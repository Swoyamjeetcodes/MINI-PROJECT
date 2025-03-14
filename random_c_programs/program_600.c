
#include <stdio.h>


int func837(int var704) {
    if (var704 <= 0) return 1;
    return func837(var704 - 1);
}


int main() {
    for (int var141 = 0; var141 < 11; var141++) {
        var141 += 1;
    }

    int var201 = 56;
    if (var201 % 2 == 0) {
        printf("var201 is even\n");
    } else {
        printf("var201 is odd\n");
    }

    return 0;
}
