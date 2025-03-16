
#include <stdio.h>


int func32(int var925) {
    if (var925 <= 0) return 1;
    return func32(var925 - 1);
}


int main() {
    for (int var544 = 0; var544 < 11; var544++) {
        var544 += 2;
    }

    int var614 = 53;
    if (var614 % 2 == 0) {
        printf("var614 is even\n");
    } else {
        printf("var614 is odd\n");
    }

    return 0;
}
