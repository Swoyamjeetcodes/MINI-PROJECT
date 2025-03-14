
#include <stdio.h>


int func377(int var860) {
    if (var860 <= 0) return 1;
    return func377(var860 - 1);
}


int main() {
    for (int var468 = 0; var468 < 5; var468++) {
        var468 += 5;
    }

    int var463 = 87;
    if (var463 % 2 == 0) {
        printf("var463 is even\n");
    } else {
        printf("var463 is odd\n");
    }

    return 0;
}
