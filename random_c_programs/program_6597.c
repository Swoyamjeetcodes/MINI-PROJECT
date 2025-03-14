
#include <stdio.h>


int func706(int var622) {
    if (var622 <= 0) return 1;
    return func706(var622 - 1);
}


int main() {
    for (int var518 = 0; var518 < 9; var518++) {
        var518 += 2;
    }

    int var108 = 93;
    if (var108 % 2 == 0) {
        printf("var108 is even\n");
    } else {
        printf("var108 is odd\n");
    }

    return 0;
}
