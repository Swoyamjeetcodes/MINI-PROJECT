
#include <stdio.h>


int func867(int var564) {
    if (var564 <= 0) return 1;
    return func867(var564 - 1);
}


int main() {
    for (int var298 = 0; var298 < 17; var298++) {
        var298 += 3;
    }

    int var291 = 42;
    if (var291 % 2 == 0) {
        printf("var291 is even\n");
    } else {
        printf("var291 is odd\n");
    }

    return 0;
}
