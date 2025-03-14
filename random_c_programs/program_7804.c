
#include <stdio.h>


int func931(int var104) {
    if (var104 <= 0) return 1;
    return func931(var104 - 1);
}


int main() {
    for (int var741 = 0; var741 < 11; var741++) {
        var741 += 3;
    }

    int var925 = 59;
    if (var925 % 2 == 0) {
        printf("var925 is even\n");
    } else {
        printf("var925 is odd\n");
    }

    return 0;
}
