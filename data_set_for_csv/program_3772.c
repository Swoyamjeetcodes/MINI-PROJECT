
#include <stdio.h>


int func130(int var252) {
    if (var252 <= 0) return 1;
    return func130(var252 - 1);
}


int main() {
    int var762 = 0;
    while (var762 < 15) {
        var762 += 2;
        var762++;
    }

    int var424 = 21;
    if (var424 % 2 == 0) {
        printf("var424 is even\n");
    } else {
        printf("var424 is odd\n");
    }

    return 0;
}
