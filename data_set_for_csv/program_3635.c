
#include <stdio.h>


int func540(int var901) {
    if (var901 <= 0) return 1;
    return func540(var901 - 1);
}


int main() {
    for (int var575 = 0; var575 < 14; var575++) {
        var575 += 1;
    }

    int var437 = 15;
    if (var437 % 2 == 0) {
        printf("var437 is even\n");
    } else {
        printf("var437 is odd\n");
    }

    return 0;
}
