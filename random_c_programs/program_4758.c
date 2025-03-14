
#include <stdio.h>


int func463(int var371) {
    if (var371 <= 0) return 1;
    return func463(var371 - 1);
}


int main() {
    for (int var707 = 0; var707 < 16; var707++) {
        var707 += 1;
    }

    int var347 = 99;
    if (var347 % 2 == 0) {
        printf("var347 is even\n");
    } else {
        printf("var347 is odd\n");
    }

    return 0;
}
