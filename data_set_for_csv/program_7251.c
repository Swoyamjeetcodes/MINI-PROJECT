
#include <stdio.h>


int func781(int var272) {
    if (var272 <= 0) return 1;
    return func781(var272 - 1);
}


int main() {
    for (int var248 = 0; var248 < 10; var248++) {
        var248 += 3;
    }

    int var714 = 21;
    if (var714 % 2 == 0) {
        printf("var714 is even\n");
    } else {
        printf("var714 is odd\n");
    }

    return 0;
}
