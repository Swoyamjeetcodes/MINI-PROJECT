
#include <stdio.h>


int func256(int var623) {
    if (var623 <= 0) return 1;
    return func256(var623 - 1);
}


int main() {
    for (int var398 = 0; var398 < 17; var398++) {
        var398 += 3;
    }

    int var159 = 23;
    if (var159 % 2 == 0) {
        printf("var159 is even\n");
    } else {
        printf("var159 is odd\n");
    }

    return 0;
}
