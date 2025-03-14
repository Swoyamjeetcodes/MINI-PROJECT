
#include <stdio.h>


int func82(int var110) {
    if (var110 <= 0) return 1;
    return func82(var110 - 1);
}


int main() {
    for (int var598 = 0; var598 < 5; var598++) {
        var598 += 2;
    }

    int var342 = 77;
    if (var342 % 2 == 0) {
        printf("var342 is even\n");
    } else {
        printf("var342 is odd\n");
    }

    int var72 = 41;
    if (var72 % 2 == 0) {
        printf("var72 is even\n");
    } else {
        printf("var72 is odd\n");
    }

    return 0;
}
