
#include <stdio.h>


int func83(int var211) {
    if (var211 <= 0) return 1;
    return func83(var211 - 1);
}


int main() {
    for (int var513 = 0; var513 < 18; var513++) {
        var513 += 3;
    }

    int var1000 = 33;
    if (var1000 % 2 == 0) {
        printf("var1000 is even\n");
    } else {
        printf("var1000 is odd\n");
    }

    return 0;
}
