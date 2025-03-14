
#include <stdio.h>


int func165(int var22) {
    if (var22 <= 0) return 1;
    return func165(var22 - 1);
}


int main() {
    int var443 = 0;
    while (var443 < 16) {
        var443 += 5;
        var443++;
    }

    int var884 = 61;
    if (var884 % 2 == 0) {
        printf("var884 is even\n");
    } else {
        printf("var884 is odd\n");
    }

    return 0;
}
