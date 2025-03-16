
#include <stdio.h>


int func811(int var453) {
    if (var453 <= 0) return 1;
    return func811(var453 - 1);
}


int main() {
    for (int var271 = 0; var271 < 16; var271++) {
        var271 += 1;
    }

    int var21 = 87;
    if (var21 % 2 == 0) {
        printf("var21 is even\n");
    } else {
        printf("var21 is odd\n");
    }

    return 0;
}
