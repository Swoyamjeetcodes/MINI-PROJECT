
#include <stdio.h>


int func945(int var473) {
    if (var473 <= 0) return 1;
    return func945(var473 - 1);
}


int main() {
    for (int var509 = 0; var509 < 11; var509++) {
        var509 += 2;
    }

    int var250 = 88;
    if (var250 % 2 == 0) {
        printf("var250 is even\n");
    } else {
        printf("var250 is odd\n");
    }

    return 0;
}
