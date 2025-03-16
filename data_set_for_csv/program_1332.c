
#include <stdio.h>


int func198(int var473) {
    if (var473 <= 0) return 1;
    return func198(var473 - 1);
}


int main() {
    for (int var604 = 0; var604 < 8; var604++) {
        var604 += 3;
    }

    int var997 = 64;
    if (var997 % 2 == 0) {
        printf("var997 is even\n");
    } else {
        printf("var997 is odd\n");
    }

    return 0;
}
