
#include <stdio.h>


int func921(int var295) {
    if (var295 <= 0) return 1;
    return func921(var295 - 1);
}


int main() {
    for (int var214 = 0; var214 < 15; var214++) {
        var214 += 2;
    }

    int var793 = 37;
    if (var793 % 2 == 0) {
        printf("var793 is even\n");
    } else {
        printf("var793 is odd\n");
    }

    return 0;
}
