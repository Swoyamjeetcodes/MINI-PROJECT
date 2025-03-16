
#include <stdio.h>


int func203(int var625) {
    if (var625 <= 0) return 1;
    return func203(var625 - 1);
}


int main() {
    for (int var494 = 0; var494 < 11; var494++) {
        var494 += 2;
    }

    int var421 = 90;
    if (var421 % 2 == 0) {
        printf("var421 is even\n");
    } else {
        printf("var421 is odd\n");
    }

    return 0;
}
