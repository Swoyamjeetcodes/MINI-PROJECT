
#include <stdio.h>


int func832(int var935) {
    if (var935 <= 0) return 1;
    return func832(var935 - 1);
}


int main() {
    int var177 = 0;
    while (var177 < 6) {
        var177 += 5;
        var177++;
    }

    int var464 = 54;
    if (var464 % 2 == 0) {
        printf("var464 is even\n");
    } else {
        printf("var464 is odd\n");
    }

    return 0;
}
