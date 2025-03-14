
#include <stdio.h>


int func815(int var123) {
    if (var123 <= 0) return 1;
    return func815(var123 - 1);
}


int main() {
    for (int var454 = 0; var454 < 11; var454++) {
        var454 += 2;
    }

    int var511 = 31;
    if (var511 % 2 == 0) {
        printf("var511 is even\n");
    } else {
        printf("var511 is odd\n");
    }

    return 0;
}
