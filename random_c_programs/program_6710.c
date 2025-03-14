
#include <stdio.h>


int func74(int var434) {
    if (var434 <= 0) return 1;
    return func74(var434 - 1);
}


int main() {
    for (int var372 = 0; var372 < 16; var372++) {
        var372 += 5;
    }

    int var323 = 79;
    if (var323 % 2 == 0) {
        printf("var323 is even\n");
    } else {
        printf("var323 is odd\n");
    }

    return 0;
}
