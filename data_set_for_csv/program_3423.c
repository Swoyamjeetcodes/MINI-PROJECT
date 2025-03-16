
#include <stdio.h>


int func182(int var38) {
    if (var38 <= 0) return 1;
    return func182(var38 - 1);
}


int main() {
    int var626 = 0;
    while (var626 < 14) {
        var626 += 4;
        var626++;
    }

    int var40 = 40;
    if (var40 % 2 == 0) {
        printf("var40 is even\n");
    } else {
        printf("var40 is odd\n");
    }

    return 0;
}
