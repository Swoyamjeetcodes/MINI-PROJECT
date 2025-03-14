
#include <stdio.h>


int func385(int var38) {
    if (var38 <= 0) return 1;
    return func385(var38 - 1);
}


int main() {
    for (int var67 = 0; var67 < 7; var67++) {
        var67 += 3;
    }

    int var669 = 20;
    if (var669 % 2 == 0) {
        printf("var669 is even\n");
    } else {
        printf("var669 is odd\n");
    }

    return 0;
}
