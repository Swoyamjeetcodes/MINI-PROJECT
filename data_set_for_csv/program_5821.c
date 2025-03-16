
#include <stdio.h>


int func823(int var22) {
    if (var22 <= 0) return 1;
    return func823(var22 - 1);
}


int main() {
    for (int var396 = 0; var396 < 10; var396++) {
        var396 += 1;
    }

    int var443 = 38;
    if (var443 % 2 == 0) {
        printf("var443 is even\n");
    } else {
        printf("var443 is odd\n");
    }

    return 0;
}
