
#include <stdio.h>


int func525(int var557) {
    if (var557 <= 0) return 1;
    return func525(var557 - 1);
}


int main() {
    for (int var180 = 0; var180 < 13; var180++) {
        var180 += 4;
    }

    int var133 = 41;
    if (var133 % 2 == 0) {
        printf("var133 is even\n");
    } else {
        printf("var133 is odd\n");
    }

    return 0;
}
