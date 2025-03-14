
#include <stdio.h>


int func998(int var451) {
    if (var451 <= 0) return 1;
    return func998(var451 - 1);
}


int main() {
    int var849 = 0;
    while (var849 < 19) {
        var849 += 4;
        var849++;
    }

    int var598 = 26;
    if (var598 % 2 == 0) {
        printf("var598 is even\n");
    } else {
        printf("var598 is odd\n");
    }

    return 0;
}
