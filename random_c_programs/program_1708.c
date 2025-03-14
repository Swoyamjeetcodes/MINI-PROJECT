
#include <stdio.h>


int func550(int var512) {
    if (var512 <= 0) return 1;
    return func550(var512 - 1);
}


int main() {
    for (int var820 = 0; var820 < 11; var820++) {
        var820 += 2;
    }

    int var651 = 27;
    if (var651 % 2 == 0) {
        printf("var651 is even\n");
    } else {
        printf("var651 is odd\n");
    }

    return 0;
}
