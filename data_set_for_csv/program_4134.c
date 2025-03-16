
#include <stdio.h>


int func647(int var793) {
    if (var793 <= 0) return 1;
    return func647(var793 - 1);
}


int main() {
    for (int var512 = 0; var512 < 8; var512++) {
        var512 += 5;
    }

    int var544 = 32;
    if (var544 % 2 == 0) {
        printf("var544 is even\n");
    } else {
        printf("var544 is odd\n");
    }

    return 0;
}
