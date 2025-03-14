
#include <stdio.h>


int func47(int var226) {
    if (var226 <= 0) return 1;
    return func47(var226 - 1);
}


int main() {
    for (int var723 = 0; var723 < 14; var723++) {
        var723 += 1;
    }

    int var332 = 95;
    if (var332 % 2 == 0) {
        printf("var332 is even\n");
    } else {
        printf("var332 is odd\n");
    }

    return 0;
}
